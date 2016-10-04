// This file has been generated by Py++.

#include "xfx.h"
#include "boost/python.hpp"
#include "xfx_py_bindings.h"
#include "renderer.pypp.hpp"

namespace bp = boost::python;

void register_Renderer_class(){

    { //::xfx::Renderer
        typedef bp::class_< xfx::Renderer, bp::bases< xfx::Singleton< xfx::Renderer > >, boost::noncopyable > Renderer_exposer_t;
        Renderer_exposer_t Renderer_exposer = Renderer_exposer_t( "Renderer", bp::no_init );
        bp::scope Renderer_scope( Renderer_exposer );
        bp::enum_< xfx::Renderer::EKnownVendors>("EKnownVendors")
            .value("EKV_UNKNOWN", xfx::Renderer::EKV_UNKNOWN)
            .value("EKV_ATI", xfx::Renderer::EKV_ATI)
            .value("EKV_NVIDIA", xfx::Renderer::EKV_NVIDIA)
            .value("EKV_INTEL", xfx::Renderer::EKV_INTEL)
            .value("EKV_TOTAL", xfx::Renderer::EKV_TOTAL)
            .export_values()
            ;
        bp::enum_< xfx::Renderer::SAMPLER_STATES>("SAMPLER_STATES")
            .value("SM_SAMP_ADDRESSU", xfx::Renderer::SM_SAMP_ADDRESSU)
            .value("SM_SAMP_ADDRESSV", xfx::Renderer::SM_SAMP_ADDRESSV)
            .value("SM_SAMP_ADDRESSW", xfx::Renderer::SM_SAMP_ADDRESSW)
            .value("SM_SAMP_BORDERCOLOR", xfx::Renderer::SM_SAMP_BORDERCOLOR)
            .value("SM_SAMP_MAGFILTER", xfx::Renderer::SM_SAMP_MAGFILTER)
            .value("SM_SAMP_MINFILTER", xfx::Renderer::SM_SAMP_MINFILTER)
            .value("SM_SAMP_MIPFILTER", xfx::Renderer::SM_SAMP_MIPFILTER)
            .value("SM_SAMP_MIPMAPLODBIAS", xfx::Renderer::SM_SAMP_MIPMAPLODBIAS)
            .value("SM_SAMP_MAXMIPLEVEL", xfx::Renderer::SM_SAMP_MAXMIPLEVEL)
            .value("SM_SAMP_MAXANISOTROPY", xfx::Renderer::SM_SAMP_MAXANISOTROPY)
            .value("SM_SAMP_SRGBTEXTURE", xfx::Renderer::SM_SAMP_SRGBTEXTURE)
            .value("SM_SAMP_ELEMENTINDEX", xfx::Renderer::SM_SAMP_ELEMENTINDEX)
            .value("SM_SAMP_DMAPOFFSET", xfx::Renderer::SM_SAMP_DMAPOFFSET)
            .value("SM_SAMP_MAX_STATES", xfx::Renderer::SM_SAMP_MAX_STATES)
            .value("SM_SAMP_FORCE_DWORD", xfx::Renderer::SM_SAMP_FORCE_DWORD)
            .export_values()
            ;
        bp::enum_< xfx::Renderer::STATES>("STATES")
            .value("SM_ZENABLE", xfx::Renderer::SM_ZENABLE)
            .value("SM_FILLMODE", xfx::Renderer::SM_FILLMODE)
            .value("SM_SHADEMODE", xfx::Renderer::SM_SHADEMODE)
            .value("SM_ZWRITEENABLE", xfx::Renderer::SM_ZWRITEENABLE)
            .value("SM_ALPHATESTENABLE", xfx::Renderer::SM_ALPHATESTENABLE)
            .value("SM_LASTPIXEL", xfx::Renderer::SM_LASTPIXEL)
            .value("SM_SRCBLEND", xfx::Renderer::SM_SRCBLEND)
            .value("SM_DESTBLEND", xfx::Renderer::SM_DESTBLEND)
            .value("SM_CULLMODE", xfx::Renderer::SM_CULLMODE)
            .value("SM_ZFUNC", xfx::Renderer::SM_ZFUNC)
            .value("SM_ALPHAREF", xfx::Renderer::SM_ALPHAREF)
            .value("SM_ALPHAFUNC", xfx::Renderer::SM_ALPHAFUNC)
            .value("SM_DITHERENABLE", xfx::Renderer::SM_DITHERENABLE)
            .value("SM_ALPHABLENDENABLE", xfx::Renderer::SM_ALPHABLENDENABLE)
            .value("SM_FOGENABLE", xfx::Renderer::SM_FOGENABLE)
            .value("SM_SPECULARENABLE", xfx::Renderer::SM_SPECULARENABLE)
            .value("SM_FOGCOLOR", xfx::Renderer::SM_FOGCOLOR)
            .value("SM_FOGTABLEMODE", xfx::Renderer::SM_FOGTABLEMODE)
            .value("SM_FOGSTART", xfx::Renderer::SM_FOGSTART)
            .value("SM_FOGEND", xfx::Renderer::SM_FOGEND)
            .value("SM_FOGDENSITY", xfx::Renderer::SM_FOGDENSITY)
            .value("SM_RANGEFOGENABLE", xfx::Renderer::SM_RANGEFOGENABLE)
            .value("SM_STENCILENABLE", xfx::Renderer::SM_STENCILENABLE)
            .value("SM_STENCILFAIL", xfx::Renderer::SM_STENCILFAIL)
            .value("SM_STENCILZFAIL", xfx::Renderer::SM_STENCILZFAIL)
            .value("SM_STENCILPASS", xfx::Renderer::SM_STENCILPASS)
            .value("SM_STENCILFUNC", xfx::Renderer::SM_STENCILFUNC)
            .value("SM_STENCILREF", xfx::Renderer::SM_STENCILREF)
            .value("SM_STENCILMASK", xfx::Renderer::SM_STENCILMASK)
            .value("SM_STENCILWRITEMASK", xfx::Renderer::SM_STENCILWRITEMASK)
            .value("SM_TEXTUREFACTOR", xfx::Renderer::SM_TEXTUREFACTOR)
            .value("SM_WRAP0", xfx::Renderer::SM_WRAP0)
            .value("SM_WRAP1", xfx::Renderer::SM_WRAP1)
            .value("SM_WRAP2", xfx::Renderer::SM_WRAP2)
            .value("SM_WRAP3", xfx::Renderer::SM_WRAP3)
            .value("SM_WRAP4", xfx::Renderer::SM_WRAP4)
            .value("SM_WRAP5", xfx::Renderer::SM_WRAP5)
            .value("SM_WRAP6", xfx::Renderer::SM_WRAP6)
            .value("SM_WRAP7", xfx::Renderer::SM_WRAP7)
            .value("SM_CLIPPING", xfx::Renderer::SM_CLIPPING)
            .value("SM_LIGHTING", xfx::Renderer::SM_LIGHTING)
            .value("SM_AMBIENT", xfx::Renderer::SM_AMBIENT)
            .value("SM_FOGVERTEXMODE", xfx::Renderer::SM_FOGVERTEXMODE)
            .value("SM_COLORVERTEX", xfx::Renderer::SM_COLORVERTEX)
            .value("SM_LOCALVIEWER", xfx::Renderer::SM_LOCALVIEWER)
            .value("SM_NORMALIZENORMALS", xfx::Renderer::SM_NORMALIZENORMALS)
            .value("SM_DIFFUSEMATERIALSOURCE", xfx::Renderer::SM_DIFFUSEMATERIALSOURCE)
            .value("SM_SPECULARMATERIALSOURCE", xfx::Renderer::SM_SPECULARMATERIALSOURCE)
            .value("SM_AMBIENTMATERIALSOURCE", xfx::Renderer::SM_AMBIENTMATERIALSOURCE)
            .value("SM_EMISSIVEMATERIALSOURCE", xfx::Renderer::SM_EMISSIVEMATERIALSOURCE)
            .value("SM_VERTEXBLEND", xfx::Renderer::SM_VERTEXBLEND)
            .value("SM_CLIPPLANEENABLE", xfx::Renderer::SM_CLIPPLANEENABLE)
            .value("SM_POINTSIZE", xfx::Renderer::SM_POINTSIZE)
            .value("SM_POINTSIZE_MIN", xfx::Renderer::SM_POINTSIZE_MIN)
            .value("SM_POINTSPRITEENABLE", xfx::Renderer::SM_POINTSPRITEENABLE)
            .value("SM_POINTSCALEENABLE", xfx::Renderer::SM_POINTSCALEENABLE)
            .value("SM_POINTSCALE_A", xfx::Renderer::SM_POINTSCALE_A)
            .value("SM_POINTSCALE_B", xfx::Renderer::SM_POINTSCALE_B)
            .value("SM_POINTSCALE_C", xfx::Renderer::SM_POINTSCALE_C)
            .value("SM_MULTISAMPLEANTIALIAS", xfx::Renderer::SM_MULTISAMPLEANTIALIAS)
            .value("SM_MULTISAMPLEMASK", xfx::Renderer::SM_MULTISAMPLEMASK)
            .value("SM_PATHEDEGESTYLE", xfx::Renderer::SM_PATHEDEGESTYLE)
            .value("SM_DEBigMONITORTOKEN", xfx::Renderer::SM_DEBigMONITORTOKEN)
            .value("SM_POINTSIZE_MAX", xfx::Renderer::SM_POINTSIZE_MAX)
            .value("SM_INDEXEDVERTEXBLENDENABLE", xfx::Renderer::SM_INDEXEDVERTEXBLENDENABLE)
            .value("SM_COLORWRITEENABLE", xfx::Renderer::SM_COLORWRITEENABLE)
            .value("SM_TWEENFACTOR", xfx::Renderer::SM_TWEENFACTOR)
            .value("SM_BLENDOP", xfx::Renderer::SM_BLENDOP)
            .value("SM_POSITIONDEGREE", xfx::Renderer::SM_POSITIONDEGREE)
            .value("SM_NORMALDEGREE", xfx::Renderer::SM_NORMALDEGREE)
            .value("SM_SCISSORTESTENABLE", xfx::Renderer::SM_SCISSORTESTENABLE)
            .value("SM_SLOPESCALEDEPTHBIAS", xfx::Renderer::SM_SLOPESCALEDEPTHBIAS)
            .value("SM_ANTIALIASEDLINEENABLE", xfx::Renderer::SM_ANTIALIASEDLINEENABLE)
            .value("SM_MINTESSELLATIONLEVEL", xfx::Renderer::SM_MINTESSELLATIONLEVEL)
            .value("SM_MAXTESSELLATIONLEVEL", xfx::Renderer::SM_MAXTESSELLATIONLEVEL)
            .value("SM_ADAPTIVETESS_X", xfx::Renderer::SM_ADAPTIVETESS_X)
            .value("SM_ADAPTIVETESS_Y", xfx::Renderer::SM_ADAPTIVETESS_Y)
            .value("SM_ADAPTIVETESS_Z", xfx::Renderer::SM_ADAPTIVETESS_Z)
            .value("SM_ADAPTIVETESS_W", xfx::Renderer::SM_ADAPTIVETESS_W)
            .value("SM_ENABLEADAPTIVETESSELLATION", xfx::Renderer::SM_ENABLEADAPTIVETESSELLATION)
            .value("SM_TWOSIDEDSTENCILMODE", xfx::Renderer::SM_TWOSIDEDSTENCILMODE)
            .value("SM_CCW_STENCILFAIL", xfx::Renderer::SM_CCW_STENCILFAIL)
            .value("SM_CCW_STENCILZFAIL", xfx::Renderer::SM_CCW_STENCILZFAIL)
            .value("SM_CCW_STENCILPASS", xfx::Renderer::SM_CCW_STENCILPASS)
            .value("SM_CCW_STENCILFUNC", xfx::Renderer::SM_CCW_STENCILFUNC)
            .value("SM_COLORWRITEENABLE1", xfx::Renderer::SM_COLORWRITEENABLE1)
            .value("SM_COLORWRITEENABLE2", xfx::Renderer::SM_COLORWRITEENABLE2)
            .value("SM_COLORWRITEENABLE3", xfx::Renderer::SM_COLORWRITEENABLE3)
            .value("SM_BLENDFACTOR", xfx::Renderer::SM_BLENDFACTOR)
            .value("SM_SRGBWRITEENABLE", xfx::Renderer::SM_SRGBWRITEENABLE)
            .value("SM_DEPTHBIAS", xfx::Renderer::SM_DEPTHBIAS)
            .value("SM_WRAP8", xfx::Renderer::SM_WRAP8)
            .value("SM_WRAP9", xfx::Renderer::SM_WRAP9)
            .value("SM_WRAP10", xfx::Renderer::SM_WRAP10)
            .value("SM_WRAP11", xfx::Renderer::SM_WRAP11)
            .value("SM_WRAP12", xfx::Renderer::SM_WRAP12)
            .value("SM_WRAP13", xfx::Renderer::SM_WRAP13)
            .value("SM_WRAP14", xfx::Renderer::SM_WRAP14)
            .value("SM_WRAP15", xfx::Renderer::SM_WRAP15)
            .value("SM_SEPARATEALPHABLENDENABLE", xfx::Renderer::SM_SEPARATEALPHABLENDENABLE)
            .value("SM_SRCBLENDALPHA", xfx::Renderer::SM_SRCBLENDALPHA)
            .value("SM_DESTBLENDALPHA", xfx::Renderer::SM_DESTBLENDALPHA)
            .value("SM_BLENDOPALPHA", xfx::Renderer::SM_BLENDOPALPHA)
            .value("SM_MAX_STATES", xfx::Renderer::SM_MAX_STATES)
            .value("SM_FORCE_DWORD", xfx::Renderer::SM_FORCE_DWORD)
            .export_values()
            ;
        bp::enum_< xfx::Renderer::TEXTURE_STATES>("TEXTURE_STATES")
            .value("SM_TEX_COLOROP", xfx::Renderer::SM_TEX_COLOROP)
            .value("SM_TEX_COLORARG1", xfx::Renderer::SM_TEX_COLORARG1)
            .value("SM_TEX_COLORARG2", xfx::Renderer::SM_TEX_COLORARG2)
            .value("SM_TEX_ALPHAOP", xfx::Renderer::SM_TEX_ALPHAOP)
            .value("SM_TEX_ALPHAARG1", xfx::Renderer::SM_TEX_ALPHAARG1)
            .value("SM_TEX_ALPHAARG2", xfx::Renderer::SM_TEX_ALPHAARG2)
            .value("SM_TEX_BUMPENVMAT00", xfx::Renderer::SM_TEX_BUMPENVMAT00)
            .value("SM_TEX_BUMPENVMAT01", xfx::Renderer::SM_TEX_BUMPENVMAT01)
            .value("SM_TEX_BUMPENVMAT10", xfx::Renderer::SM_TEX_BUMPENVMAT10)
            .value("SM_TEX_BUMPENVMAT11", xfx::Renderer::SM_TEX_BUMPENVMAT11)
            .value("SM_TEX_TEXCOORDINDEX", xfx::Renderer::SM_TEX_TEXCOORDINDEX)
            .value("SM_TEX_BUMPENVLSCALE", xfx::Renderer::SM_TEX_BUMPENVLSCALE)
            .value("SM_TEX_BUMPENVLOFFSET", xfx::Renderer::SM_TEX_BUMPENVLOFFSET)
            .value("SM_TEX_TEXTURETRANSFORMFLAGS", xfx::Renderer::SM_TEX_TEXTURETRANSFORMFLAGS)
            .value("SM_TEX_COLORARG0", xfx::Renderer::SM_TEX_COLORARG0)
            .value("SM_TEX_ALPHAARG0", xfx::Renderer::SM_TEX_ALPHAARG0)
            .value("SM_TEX_RESULTARG", xfx::Renderer::SM_TEX_RESULTARG)
            .value("SM_TEX_CONSTANT", xfx::Renderer::SM_TEX_CONSTANT)
            .value("SM_TEX_MAX_STATES", xfx::Renderer::SM_TEX_MAX_STATES)
            .value("SM_TEX_FORCE_DWORD", xfx::Renderer::SM_TEX_FORCE_DWORD)
            .export_values()
            ;
        { //::xfx::Renderer::FrameStatistics
            typedef bp::class_< xfx::Renderer::FrameStatistics > FrameStatistics_exposer_t;
            FrameStatistics_exposer_t FrameStatistics_exposer = FrameStatistics_exposer_t( "FrameStatistics" );
            bp::scope FrameStatistics_scope( FrameStatistics_exposer );
            { //::xfx::Renderer::FrameStatistics::clear
            
                typedef void ( ::xfx::Renderer::FrameStatistics::*clear_function_type )(  ) ;
                
                FrameStatistics_exposer.def( 
                    "clear"
                    , clear_function_type( &::xfx::Renderer::FrameStatistics::clear ) );
            
            }
            FrameStatistics_exposer.def_readwrite( "avg_lines", &xfx::Renderer::FrameStatistics::avg_lines );
            FrameStatistics_exposer.def_readwrite( "avg_lines_disp", &xfx::Renderer::FrameStatistics::avg_lines_disp );
            FrameStatistics_exposer.def_readwrite( "avg_sprites", &xfx::Renderer::FrameStatistics::avg_sprites );
            FrameStatistics_exposer.def_readwrite( "avg_sprites_disp", &xfx::Renderer::FrameStatistics::avg_sprites_disp );
            FrameStatistics_exposer.def_readwrite( "avg_usertris", &xfx::Renderer::FrameStatistics::avg_usertris );
            FrameStatistics_exposer.def_readwrite( "avg_usertris_disp", &xfx::Renderer::FrameStatistics::avg_usertris_disp );
            FrameStatistics_exposer.def_readwrite( "num_batches", &xfx::Renderer::FrameStatistics::num_batches );
            FrameStatistics_exposer.def_readwrite( "num_lines", &xfx::Renderer::FrameStatistics::num_lines );
            FrameStatistics_exposer.def_readwrite( "num_sprites", &xfx::Renderer::FrameStatistics::num_sprites );
            FrameStatistics_exposer.def_readwrite( "num_tris", &xfx::Renderer::FrameStatistics::num_tris );
            FrameStatistics_exposer.def_readwrite( "num_usertris", &xfx::Renderer::FrameStatistics::num_usertris );
            bp::register_ptr_to_python< boost::shared_ptr< xfx::Renderer::FrameStatistics const > >( );
            bp::implicitly_convertible< boost::shared_ptr< xfx::Renderer::FrameStatistics >, boost::shared_ptr< xfx::Renderer::FrameStatistics const > >( );
        }
        { //::xfx::Renderer::ActiveTexture
        
            typedef ::boost::shared_ptr< xfx::ITexture const > const & ( ::xfx::Renderer::*active_texture_function_type )( unsigned int ) const;
            
            Renderer_exposer.def( 
                "active_texture"
                , active_texture_function_type( &::xfx::Renderer::ActiveTexture )
                , ( bp::arg("stage")=(unsigned int)(0) )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::xfx::Renderer::ApplyTexture
        
            typedef void ( ::xfx::Renderer::*apply_texture_function_type )( ::boost::shared_ptr< xfx::ITexture const > const &,unsigned int,bool,bool ) ;
            
            Renderer_exposer.def( 
                "apply_texture"
                , apply_texture_function_type( &::xfx::Renderer::ApplyTexture )
                , ( bp::arg("tex"), bp::arg("stage")=(unsigned int)(0), bp::arg("apply_transforms")=(bool)(true), bp::arg("notify_only")=(bool)(false) ) );
        
        }
        { //::xfx::Renderer::BeginFrame
        
            typedef void ( ::xfx::Renderer::*begin_frame_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "begin_frame"
                , begin_frame_function_type( &::xfx::Renderer::BeginFrame ) );
        
        }
        { //::xfx::Renderer::Clear
        
            typedef void ( ::xfx::Renderer::*clear_function_type )( ::DWORD const & ) ;
            
            Renderer_exposer.def( 
                "clear"
                , clear_function_type( &::xfx::Renderer::Clear )
                , ( bp::arg("flags") ) );
        
        }
        { //::xfx::Renderer::CreateDevice
        
            typedef ::HRESULT ( ::xfx::Renderer::*create_device_function_type )( void * ) ;
            
            Renderer_exposer.def( 
                "create_device"
                , create_device_function_type( &::xfx::Renderer::CreateDevice )
                , ( bp::arg("hwnd") ) );
        
        }
        { //::xfx::Renderer::DisableAlphaToCoverage
        
            typedef void ( ::xfx::Renderer::*disable_alpha_to_coverage_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "disable_alpha_to_coverage"
                , disable_alpha_to_coverage_function_type( &::xfx::Renderer::DisableAlphaToCoverage ) );
        
        }
        { //::xfx::Renderer::DrawFrameStatistics
        
            typedef void ( ::xfx::Renderer::*draw_frame_statistics_function_type )( ::xfx::Font const &,::boost::shared_ptr< xfx::Shader const > const & ) const;
            
            Renderer_exposer.def( 
                "draw_frame_statistics"
                , draw_frame_statistics_function_type( &::xfx::Renderer::DrawFrameStatistics )
                , ( bp::arg("fnt"), bp::arg("white_shader") ) );
        
        }
        { //::xfx::Renderer::DrawIndexedPrimitive
        
            typedef void ( ::xfx::Renderer::*draw_indexed_primitive_function_type )( ::D3DPRIMITIVETYPE,::INT,::UINT,::UINT,::UINT,::UINT ) ;
            
            Renderer_exposer.def( 
                "draw_indexed_primitive"
                , draw_indexed_primitive_function_type( &::xfx::Renderer::DrawIndexedPrimitive )
                , ( bp::arg("type"), bp::arg("base_vertex_index"), bp::arg("min_index"), bp::arg("num_verts"), bp::arg("start_index"), bp::arg("p_count") ) );
        
        }
        { //::xfx::Renderer::DrawPrimitive
        
            typedef void ( ::xfx::Renderer::*draw_primitive_function_type )( ::D3DPRIMITIVETYPE,::UINT,::UINT ) ;
            
            Renderer_exposer.def( 
                "draw_primitive"
                , draw_primitive_function_type( &::xfx::Renderer::DrawPrimitive )
                , ( bp::arg("type"), bp::arg("offset"), bp::arg("p_count") ) );
        
        }
        { //::xfx::Renderer::EndFrame
        
            typedef void ( ::xfx::Renderer::*end_frame_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "end_frame"
                , end_frame_function_type( &::xfx::Renderer::EndFrame ) );
        
        }
        { //::xfx::Renderer::Fullscreen
        
            typedef ::HRESULT ( ::xfx::Renderer::*fullscreen_function_type )( bool,unsigned int,unsigned int,unsigned int const *,::D3DFORMAT const * ) ;
            
            Renderer_exposer.def( 
                "fullscreen"
                , fullscreen_function_type( &::xfx::Renderer::Fullscreen )
                , ( bp::arg("isfullscreen"), bp::arg("width"), bp::arg("height"), bp::arg("refreshrate")=bp::object(), bp::arg("format")=bp::object() ) );
        
        }
        { //::xfx::Renderer::GetFrameStatistics
        
            typedef ::xfx::Renderer::FrameStatistics & ( ::xfx::Renderer::*get_frame_statistics_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "get_frame_statistics"
                , get_frame_statistics_function_type( &::xfx::Renderer::GetFrameStatistics )
                , bp::return_internal_reference< >() );
        
        }
        { //::xfx::Renderer::GetFrameStatistics
        
            typedef ::xfx::Renderer::FrameStatistics const & ( ::xfx::Renderer::*get_frame_statistics_function_type )(  ) const;
            
            Renderer_exposer.def( 
                "get_frame_statistics"
                , get_frame_statistics_function_type( &::xfx::Renderer::GetFrameStatistics )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::xfx::Renderer::GetTransform
        
            typedef void ( ::xfx::Renderer::*get_transform_function_type )( ::D3DTRANSFORMSTATETYPE const &,::xfx::Mat4 & ) const;
            
            Renderer_exposer.def( 
                "get_transform"
                , get_transform_function_type( &::xfx::Renderer::GetTransform )
                , ( bp::arg("transform"), bp::arg("matr") ) );
        
        }
        { //::xfx::Renderer::GetViewport
        
            typedef void ( ::xfx::Renderer::*get_viewport_function_type )( ::D3DVIEWPORT9 & ) ;
            
            Renderer_exposer.def( 
                "get_viewport"
                , get_viewport_function_type( &::xfx::Renderer::GetViewport )
                , ( bp::arg("viewport") ) );
        
        }
        { //::xfx::Renderer::RenderPrimitive
        
            typedef void ( ::xfx::Renderer::*render_primitive_function_type )( ::boost::shared_ptr< xfx::Shader const > const &,::xfx::ShaderParams const &,::boost::function0< void > const & ) ;
            
            Renderer_exposer.def( 
                "render_primitive"
                , render_primitive_function_type( &::xfx::Renderer::RenderPrimitive )
                , ( bp::arg("shd"), bp::arg("consts"), bp::arg("render_fn") ) );
        
        }
        { //::xfx::Renderer::ResetDevice
        
            typedef ::HRESULT ( ::xfx::Renderer::*reset_device_function_type )( unsigned int,unsigned int ) ;
            
            Renderer_exposer.def( 
                "reset_device"
                , reset_device_function_type( &::xfx::Renderer::ResetDevice )
                , ( bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::xfx::Renderer::RestoreStates
        
            typedef void ( ::xfx::Renderer::*restore_states_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "restore_states"
                , restore_states_function_type( &::xfx::Renderer::RestoreStates ) );
        
        }
        { //::xfx::Renderer::SamplerState
        
            typedef ::DWORD const & ( ::xfx::Renderer::*sampler_state_function_type )( unsigned int,::xfx::Renderer::SAMPLER_STATES ) const;
            
            Renderer_exposer.def( 
                "sampler_state"
                , sampler_state_function_type( &::xfx::Renderer::SamplerState )
                , ( bp::arg("stage"), bp::arg("state") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::xfx::Renderer::SamplerState
        
            typedef void ( ::xfx::Renderer::*sampler_state_function_type )( unsigned int,::xfx::Renderer::SAMPLER_STATES,::DWORD ) ;
            
            Renderer_exposer.def( 
                "sampler_state"
                , sampler_state_function_type( &::xfx::Renderer::SamplerState )
                , ( bp::arg("stage"), bp::arg("state"), bp::arg("value") ) );
        
        }
        { //::xfx::Renderer::SetTransform
        
            typedef void ( ::xfx::Renderer::*set_transform_function_type )( ::D3DTRANSFORMSTATETYPE const &,::xfx::Mat4 const & ) ;
            
            Renderer_exposer.def( 
                "set_transform"
                , set_transform_function_type( &::xfx::Renderer::SetTransform )
                , ( bp::arg("transform"), bp::arg("matr") ) );
        
        }
        { //::xfx::Renderer::SetViewport
        
            typedef void ( ::xfx::Renderer::*set_viewport_function_type )( ::D3DVIEWPORT9 const & ) ;
            
            Renderer_exposer.def( 
                "set_viewport"
                , set_viewport_function_type( &::xfx::Renderer::SetViewport )
                , ( bp::arg("viewport") ) );
        
        }
        { //::xfx::Renderer::Shutdown
        
            typedef void ( ::xfx::Renderer::*shutdown_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::xfx::Renderer::Shutdown ) );
        
        }
        { //::xfx::Renderer::State
        
            typedef ::DWORD const & ( ::xfx::Renderer::*state_function_type )( ::xfx::Renderer::STATES ) const;
            
            Renderer_exposer.def( 
                "state"
                , state_function_type( &::xfx::Renderer::State )
                , ( bp::arg("state") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::xfx::Renderer::State
        
            typedef void ( ::xfx::Renderer::*state_function_type )( ::xfx::Renderer::STATES,::DWORD ) ;
            
            Renderer_exposer.def( 
                "state"
                , state_function_type( &::xfx::Renderer::State )
                , ( bp::arg("state"), bp::arg("value") ) );
        
        }
        { //::xfx::Renderer::TakeScreenshot
        
            typedef ::HRESULT ( ::xfx::Renderer::*take_screenshot_function_type )( ::xfx::String const &,bool ) const;
            
            Renderer_exposer.def( 
                "take_screenshot"
                , take_screenshot_function_type( &::xfx::Renderer::TakeScreenshot )
                , ( bp::arg("filename"), bp::arg("save_jpeg")=(bool)(false) ) );
        
        }
        { //::xfx::Renderer::TextureState
        
            typedef ::DWORD const & ( ::xfx::Renderer::*texture_state_function_type )( unsigned int,::xfx::Renderer::TEXTURE_STATES ) const;
            
            Renderer_exposer.def( 
                "texture_state"
                , texture_state_function_type( &::xfx::Renderer::TextureState )
                , ( bp::arg("stage"), bp::arg("state") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::xfx::Renderer::TextureState
        
            typedef void ( ::xfx::Renderer::*texture_state_function_type )( unsigned int,::xfx::Renderer::TEXTURE_STATES,::DWORD ) ;
            
            Renderer_exposer.def( 
                "texture_state"
                , texture_state_function_type( &::xfx::Renderer::TextureState )
                , ( bp::arg("stage"), bp::arg("state"), bp::arg("value") ) );
        
        }
        { //::xfx::Renderer::TryEnableAlphaToCoverage
        
            typedef void ( ::xfx::Renderer::*try_enable_alpha_to_coverage_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "try_enable_alpha_to_coverage"
                , try_enable_alpha_to_coverage_function_type( &::xfx::Renderer::TryEnableAlphaToCoverage ) );
        
        }
        Renderer_exposer.def_readonly( "max_texture_stages", xfx::Renderer::MAX_TEXTURE_STAGES );
        { //property "draw_tools"[fget=::xfx::Renderer::GetDrawTools]
        
            typedef ::xfx::DrawTools & ( ::xfx::Renderer::*fget )(  ) ;
            
            Renderer_exposer.add_property( 
                "draw_tools"
                , bp::make_function( 
                      fget( &::xfx::Renderer::GetDrawTools )
                    , bp::return_internal_reference< >() )  );
        
        }
        { //property "clear_flags"[fget=::xfx::Renderer::ClearFlags, fset=::xfx::Renderer::SetClearFlags]
        
            typedef ::DWORD const & ( ::xfx::Renderer::*fget )(  ) const;
            typedef void ( ::xfx::Renderer::*fset )( ::DWORD const & ) ;
            
            Renderer_exposer.add_property( 
                "clear_flags"
                , bp::make_function( 
                      fget( &::xfx::Renderer::ClearFlags )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::xfx::Renderer::SetClearFlags )
                , "get\\set property, built on top of \"DWORD const & xfx::Renderer::ClearFlags() const [member function]\" and \"void xfx::Renderer::SetClearFlags(DWORD const & fl) [member function]\"" );
        
        }
        { //property "fvf"[fget=::xfx::Renderer::GetFVF, fset=::xfx::Renderer::SetFVF]
        
            typedef int const & ( ::xfx::Renderer::*fget )(  ) const;
            typedef void ( ::xfx::Renderer::*fset )( int const & ) ;
            
            Renderer_exposer.add_property( 
                "fvf"
                , bp::make_function( 
                      fget( &::xfx::Renderer::GetFVF )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::xfx::Renderer::SetFVF )
                , "get\\set property, built on top of \"int const & xfx::Renderer::GetFVF() const [member function]\" and \"void xfx::Renderer::SetFVF(int const & fvf) [member function]\"" );
        
        }
        { //property "default_shader"[fget=::xfx::Renderer::GetDefaultShader, fset=::xfx::Renderer::SetDefaultShader]
        
            typedef ::boost::shared_ptr<xfx::Shader const> const & ( ::xfx::Renderer::*fget )(  ) const;
            typedef void ( ::xfx::Renderer::*fset )( ::boost::shared_ptr<xfx::Shader const> const & ) ;
            
            Renderer_exposer.add_property( 
                "default_shader"
                , bp::make_function( 
                      fget( &::xfx::Renderer::GetDefaultShader )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::xfx::Renderer::SetDefaultShader )
                , "get\\set property, built on top of \"boost::shared_ptr<xfx::Shader const> const & xfx::Renderer::GetDefaultShader() const [member function]\" and \"void xfx::Renderer::SetDefaultShader(boost::shared_ptr<xfx::Shader const> const & shd) [member function]\"" );
        
        }
        { //property "d3dcaps"[fget=::xfx::Renderer::D3DCaps]
        
            typedef ::D3DCAPS9 const & ( ::xfx::Renderer::*fget )(  ) const;
            
            Renderer_exposer.add_property( 
                "d3dcaps"
                , bp::make_function( 
                      fget( &::xfx::Renderer::D3DCaps )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"D3DCAPS9 const & xfx::Renderer::D3DCaps() const [member function]\"" );
        
        }
        { //property "d3dpp"[fget=::xfx::Renderer::D3DPP]
        
            typedef ::D3DPRESENT_PARAMETERS const & ( ::xfx::Renderer::*fget )(  ) const;
            
            Renderer_exposer.add_property( 
                "d3dpp"
                , bp::make_function( 
                      fget( &::xfx::Renderer::D3DPP )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"D3DPRESENT_PARAMETERS const & xfx::Renderer::D3DPP() const [member function]\"" );
        
        }
        { //property "alpha_to_coverage_supported"[fget=::xfx::Renderer::IsAlphaToCoverageSupported]
        
            typedef bool ( ::xfx::Renderer::*fget )(  ) const;
            
            Renderer_exposer.add_property( 
                "alpha_to_coverage_supported"
                , fget( &::xfx::Renderer::IsAlphaToCoverageSupported )
                , "get property, built on top of \"bool xfx::Renderer::IsAlphaToCoverageSupported() const [member function]\"" );
        
        }
        { //property "vp"[fget=::xfx::Renderer::GetVP]
        
            typedef ::xfx::Mat4 const & ( ::xfx::Renderer::*fget )(  ) const;
            
            Renderer_exposer.add_property( 
                "vp"
                , bp::make_function( 
                      fget( &::xfx::Renderer::GetVP )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"xfx::Mat4 const & xfx::Renderer::GetVP() const [member function]\"" );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< xfx::Renderer const > >( );
        bp::implicitly_convertible< boost::shared_ptr< xfx::Renderer >, boost::shared_ptr< xfx::Renderer const > >( );
    }

}