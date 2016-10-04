// This file has been generated by Py++.

#include "xfx.h"
#include "boost/python.hpp"
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "xfx_py_bindings.h"
#include "envelope_less__xfx_scope_vec3_comma__float_comma__xfx_scope_simplelerpfn_less__xfx_scope_vec3__greater___greater_.pypp.hpp"

namespace bp = boost::python;

static boost::python::tuple ParseEnvelope_2f7780db22690853d740fd0ad23b1eaa( unsigned int pos, ::std::string const & str ){
    xfx::Envelope<xfx::Vec3, float, xfx::SimpleLerpFn<xfx::Vec3> > env2;
    ::HRESULT result = ::xfx::Envelope<xfx::Vec3, float, xfx::SimpleLerpFn<xfx::Vec3> >::ParseEnvelope(env2, pos, str);
    return bp::make_tuple( result, env2, pos );
}

void register_Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__class(){

    { //::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >
        typedef bp::class_< xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > > > Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer_t;
        Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer_t Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer = Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer_t( "Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater_", bp::init< >() );
        bp::scope Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__scope( Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer );
        { //::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::AddKey
        
            typedef xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > > exported_class_t;
            typedef void ( exported_class_t::*add_key_function_type )( float const &,::xfx::Vec3 const & ) ;
            
            Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer.def( 
                "add_key"
                , add_key_function_type( &::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::AddKey )
                , ( bp::arg("t"), bp::arg("key") ) );
        
        }
        { //::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::Clear
        
            typedef xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer.def( 
                "clear"
                , clear_function_type( &::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::Clear ) );
        
        }
        { //::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::Key
        
            typedef xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > > exported_class_t;
            typedef ::xfx::Vec3 ( exported_class_t::*key_function_type )( float const & ) const;
            
            Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer.def( 
                "key"
                , key_function_type( &::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::Key )
                , ( bp::arg("t") ) );
        
        }
        { //::xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > >::ParseEnvelope
        
            typedef xfx::Envelope< xfx::Vec3, float, xfx::SimpleLerpFn< xfx::Vec3 > > exported_class_t;
            typedef boost::python::tuple ( *parse_envelope_function_type )( unsigned int,::std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & );
            
            Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer.def( 
                "parse_envelope"
                , parse_envelope_function_type( &ParseEnvelope_2f7780db22690853d740fd0ad23b1eaa )
                , ( bp::arg("pos"), bp::arg("str") ) );
        
        }
        Envelope_less__xfx_scope_Vec3_comma__float_comma__xfx_scope_SimpleLerpFn_less__xfx_scope_Vec3__greater___greater__exposer.staticmethod( "parse_envelope" );
        bp::register_ptr_to_python< boost::shared_ptr< xfx::Envelope<xfx::Vec3, float, xfx::SimpleLerpFn<xfx::Vec3> > const > >( );
        bp::implicitly_convertible< boost::shared_ptr< xfx::Envelope<xfx::Vec3, float, xfx::SimpleLerpFn<xfx::Vec3> > >, boost::shared_ptr< xfx::Envelope<xfx::Vec3, float, xfx::SimpleLerpFn<xfx::Vec3> > const > >( );
    }

}