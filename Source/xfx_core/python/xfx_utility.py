
import os
import re
from pyplusplus import module_builder, code_creators, messages
from pyplusplus import function_transformers as ft
from pyplusplus.module_builder import call_policies
from pygccxml.declarations.matchers import access_type_matcher_t 

def camel_convert(name):
    s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()

#Creating an instance of class that will help you to expose your declarations
mb = module_builder.module_builder_t( [ r"xfx_py_bindings.h", ]
                                      , gccxml_path=r"../../third_party/gccxml-0.9/bin/gccxml.exe" 
                                      , working_directory=r"."
                                      , include_paths=[u'../../third_party/boost_1_44_0', u'../../third_party/dxsdk-9.0c-sum04/include', '.', ]
                                      , define_symbols=['WIN32=1', 'NDEBUG=1', '_LIB=1', 'UNICODE=1', '_UNICODE=1',
														'_HAS_TR1=0', 'BOOST_RANGE_ENABLE_CONCEPT_ASSERT=0',
														'BOOST_MPL_CFG_ASSERT_USE_RELATION_NAMES=1' ] )
														
mb.BOOST_PYTHON_MAX_ARITY = 16

mb.namespace( 'xfx' ).include( )
#mb.namespace( 'boost' ).classes( lambda x: x.name.startswith( 'shared_ptr' ) ).include( )
mb.calldefs( access_type_matcher_t( 'protected' ) ).exclude()
mb.calldefs( access_type_matcher_t( 'private' ) ).exclude()
mb.variables( access_type_matcher_t( 'protected' ) ).exclude()
mb.variables( access_type_matcher_t( 'private' ) ).exclude()
mb.member_functions( lambda x: x.name.startswith( '_' ) ).exclude()
mb.variables( lambda x: x.name.startswith( '_' ) ).exclude()

mb.class_( lambda x: x.name.startswith( 'HINSTANCE' ) ).include( )
mb.class_( lambda x: x.name.startswith( 'HWND' ) ).include( )
mb.decls( lambda x: x.name.startswith( '_D3DTRANSFORMSTATETYPE' ) ).include( )
mb.decls( lambda x: x.name.startswith( '_D3DCUBEMAP_FACES' ) ).include( )
mb.decls( lambda x: x.name.startswith( '_D3DFORMAT' ) ).include( )
mb.decls( lambda x: x.name.startswith( '_D3DPRIMITIVETYPE' ) ).include( )
mb.decls( lambda x: x.name.startswith( '_D3DVIEWPORT' ) ).include( )

mb.classes( ).add_properties( exclude_accessors=True )

for c in mb.member_functions( ):
	c.rename( camel_convert( c.alias ) )
for c in mb.free_functions( ):
	c.rename( camel_convert( c.alias ) )
for c in mb.variables( ):
	c.rename( camel_convert( c.alias ) )
for c in mb.classes( ):
	for p in c.properties:
		p.set_name( camel_convert( p.name ) )
		#c_same = c.member_functions( p.name, allow_empty = True )
		#if c_same:
		#	c_same.exclude( )

mb.class_( "Caches" ).member_functions( "ClearCallbacks" ).exclude( )
mb.class_( "Cmd" ).member_function( "RegisterCmd" ).exclude( )
#mb.class_( "Cmd" ).member_function( "RegisterVar" ).exclude( )
mb.class_( "ITexture" ).member_functions( lambda x: x.name in ( "GetD3DTex", ) ).exclude( )
mb.member_functions( "ParseAt" ).exclude()

#mb.free_function( "gToConsole" ).include( )
#mb.free_function( "gMess" ).include( )
#mb.free_function( "gWarn" ).include( )
#mb.free_function( "gError" ).include( )
#mb.free_function( "gCError" ).include( )

mb.member_functions( "Instance" ).call_policies = call_policies.return_internal_reference( )
mb.free_function( "gGetApplication" ).call_policies = call_policies.return_internal_reference( )
mb.class_( "BooksManager" ).member_function( "GetBook" ).call_policies = call_policies.return_internal_reference( )
mb.class_( "Shader" ).member_function( "GetTextureInfoOnStage" ).call_policies = call_policies.return_internal_reference( )
mb.class_( "Pack" ).member_function( "FindFile" ).call_policies = call_policies.return_internal_reference( )
mb.class_( "ParticleSystem" ).member_functions( "GetSubSystem" ).call_policies = call_policies.return_internal_reference( )
mb.class_( "ParticleSystem" ).member_functions( "GetParticle" ).call_policies = call_policies.return_internal_reference( )

#mb.class_( "FileIterator_t" ).opaque = True
#mb.class_( "TextureInfo" ).opaque = True

mb.class_( "FileSystem" ).member_function( "GetFileSize" ).add_transformation( ft.output( "len" ) )
mb.class_( "Pack" ).member_function( "GetFileSize" ).add_transformation( ft.output( "len" ) )
mb.class_( "Pack" ).member_function( "GetFileOffset" ).add_transformation( ft.output( "ofs" ) )
mb.class_( "Viewport" ).member_functions( "Project" ).add_transformation( ft.output( "x" ), ft.output( "y" ) )
mb.class_( "AABBTree" ).member_functions( "TestIntersection", arg_types = [ 'float &', None, None, None ] ).add_transformation( ft.output( "t" ), ft.output( "normal" ), alias = 'test_intersection_ray' )
mb.class_( "Texture" ).member_functions( "GetFrameTexCoords" ).add_transformation( ft.output( "u0" ), ft.output( "v0" ), ft.output( "u1" ), ft.output( "v1" ) )
mb.member_functions( "Projection" ).add_transformation( ft.output( "a" ), ft.output( "b" ) )
mb.member_functions( "ParseEnvelope" ).add_transformation( ft.output( "env" ), ft.inout( "pos" ) )
mb.free_function( "ParseAngleVariable" ).add_transformation( ft.output( "var" ), ft.inout( "pos" ) )
mb.free_function( "ParseBigAngleVariable" ).add_transformation( ft.output( "var" ), ft.inout( "pos" ) )

l = ( 'Triangle', 'AABB', 'Sphere', 'Plane' )
for s in l:
	f = mb.namespace( "Primitives" ).free_function( name = "TestIntersection", arg_types = [ 'float &', None, ''.join( ( '::xfx::Primitives::', s, ' const &' ) ), None, None ] )
	f.add_transformation( ft.output( "t" ), ft.output( "norm" ), alias = ''.join( ( f.alias, '_', camel_convert( s ) ) ) )

l = ( 'Mat4', 'Vec4' )
for s in l:
	f = mb.class_( "ShaderParams" ).member_function( name = "GetValue", arg_types = [ None, ''.join( ( '::xfx::', s, ' &' ) ) ] )
	f.add_transformation( ft.output( "value" ), alias = ''.join( ( f.alias, '_', camel_convert( s ) ) ) )

l = ( 'int', 'float' )
for s in l:
	f = mb.class_( "ShaderParams" ).member_function( name = "GetValue", arg_types = [ None, ''.join( ( s, ' &' ) ) ] )
	f.add_transformation( ft.output( "value" ), alias = ''.join( ( f.alias, '_', camel_convert( s ) ) ) )

f = mb.class_( "ShaderParams" ).member_function( name = "GetValue", arg_types = [ None, '::boost::shared_ptr<xfx::ITexture const> &' ] )
f.add_transformation( ft.output( "value" ), alias = ''.join( ( f.alias, '_texture' ) ) )

#mb.print_declarations( mb.namespace( lambda x: x.name.startswith( 'xfx' ) ) )

mb.namespace( "Primitives" ).class_( "Triangle" ).disable_warnings( messages.W1027 ) #Py++ will generate class wrapper - array member variable
mb.class_( "Shader" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "ScriptResource" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "Font" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "ParticleSystem" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "MessagesBook" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "Mesh" ).disable_warnings( messages.W1023 ) #Py++ will generate class wrapper - few functions that should be redefined in class wrapper
mb.class_( "DrawTools" ).class_( "DrawChunkInfo" ).disable_warnings( messages.W1024 ) #Py++ will generate class wrapper - bit field member variable
mb.class_( "ITexture" ).member_functions( lambda x: x.name in ( "GetTextureMatrix", "GetTransformation", ) ).disable_warnings( messages.W1049 ) #This method could not be overriden in Python
mb.namespace( "boost" ).decls( lambda x: x.name.startswith( "shared_ptr" ) ).disable_warnings( messages.W1040 ) #The declaration is unexposed
mb.namespace( "boost" ).decls( lambda x: x.name.startswith( "function" ) ).disable_warnings( messages.W1040 ) #The declaration is unexposed
mb.namespace( "tuples" ).decls( lambda x: x.name.startswith( "tuple" ) ).disable_warnings( messages.W1040 ) #The declaration is unexposed
mb.namespace( "stdext" ).decls( lambda x: x.name.startswith( "hash_map" ) ).disable_warnings( messages.W1040 ) #The declaration is unexposed

#Creating code creator. After this step you should not modify/customize declarations.
mb.build_code_creator( module_name='xfx' )
mb.code_creator.adopt_creator( code_creators.include_t( 'xfx.h' ), 0 )

#Writing code to file.
mb.split_module( 'generated' )
