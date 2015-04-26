// This file has been generated by Py++.

#include "xfx.h"
#include "boost/python.hpp"
#include "xfx_py_bindings.h"
#include "engine.pypp.hpp"

namespace bp = boost::python;

void register_Engine_class(){

    { //::xfx::Engine
        typedef bp::class_< xfx::Engine, bp::bases< xfx::Singleton< xfx::Engine > >, boost::noncopyable > Engine_exposer_t;
        Engine_exposer_t Engine_exposer = Engine_exposer_t( "Engine", bp::no_init );
        bp::scope Engine_scope( Engine_exposer );
        { //::xfx::Engine::AssociateConsoleControl
        
            typedef void ( ::xfx::Engine::*associate_console_control_function_type )( ::boost::shared_ptr< xfx::Console > const & ) ;
            
            Engine_exposer.def( 
                "associate_console_control"
                , associate_console_control_function_type( &::xfx::Engine::AssociateConsoleControl )
                , ( bp::arg("ctrl") ) );
        
        }
        { //::xfx::Engine::Init
        
            typedef bool ( ::xfx::Engine::*init_function_type )( bool ) ;
            
            Engine_exposer.def( 
                "init"
                , init_function_type( &::xfx::Engine::Init )
                , ( bp::arg("init_input")=(bool)(true) ) );
        
        }
        { //::xfx::Engine::Log
        
            typedef void ( ::xfx::Engine::*log_function_type )( ::xfx::Log::EMessageType const &,::xfx::String const &,::xfx::String const & ) ;
            
            Engine_exposer.def( 
                "log"
                , log_function_type( &::xfx::Engine::Log )
                , ( bp::arg("type"), bp::arg("msg"), bp::arg("prefix")="" ) );
        
        }
        { //::xfx::Engine::PrintToConsole
        
            typedef void ( ::xfx::Engine::*print_to_console_function_type )( ::xfx::Log::EMessageType const &,::xfx::WString const & ) ;
            
            Engine_exposer.def( 
                "print_to_console"
                , print_to_console_function_type( &::xfx::Engine::PrintToConsole )
                , ( bp::arg("type"), bp::arg("str") ) );
        
        }
        { //::xfx::Engine::Shutdown
        
            typedef bool ( ::xfx::Engine::*shutdown_function_type )(  ) ;
            
            Engine_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::xfx::Engine::Shutdown ) );
        
        }
        { //::xfx::Engine::ToggleConsole
        
            typedef void ( ::xfx::Engine::*toggle_console_function_type )(  ) ;
            
            Engine_exposer.def( 
                "toggle_console"
                , toggle_console_function_type( &::xfx::Engine::ToggleConsole ) );
        
        }
        { //property "version_major"[fget=::xfx::Engine::GetVersionMajor]
        
            typedef int const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_major"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionMajor )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"int const & xfx::Engine::GetVersionMajor() const [member function]\"" );
        
        }
        { //property "version_minor"[fget=::xfx::Engine::GetVersionMinor]
        
            typedef int const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_minor"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionMinor )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"int const & xfx::Engine::GetVersionMinor() const [member function]\"" );
        
        }
        { //property "version_build"[fget=::xfx::Engine::GetVersionBuild]
        
            typedef int const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_build"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionBuild )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"int const & xfx::Engine::GetVersionBuild() const [member function]\"" );
        
        }
        { //property "version_revision"[fget=::xfx::Engine::GetVersionRevision]
        
            typedef int const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_revision"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionRevision )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"int const & xfx::Engine::GetVersionRevision() const [member function]\"" );
        
        }
        { //property "version_build_date"[fget=::xfx::Engine::GetVersionBuildDate]
        
            typedef ::xfx::String const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_build_date"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionBuildDate )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"xfx::String const & xfx::Engine::GetVersionBuildDate() const [member function]\"" );
        
        }
        { //property "version_full"[fget=::xfx::Engine::GetVersionFull]
        
            typedef ::xfx::String const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_full"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionFull )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"xfx::String const & xfx::Engine::GetVersionFull() const [member function]\"" );
        
        }
        { //property "version_git_full"[fget=::xfx::Engine::GetVersionGitFull]
        
            typedef ::xfx::String const & ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "version_git_full"
                , bp::make_function( 
                      fget( &::xfx::Engine::GetVersionGitFull )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"xfx::String const & xfx::Engine::GetVersionGitFull() const [member function]\"" );
        
        }
        { //property "console_active"[fget=::xfx::Engine::IsConsoleActive]
        
            typedef bool ( ::xfx::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "console_active"
                , fget( &::xfx::Engine::IsConsoleActive )
                , "get property, built on top of \"bool xfx::Engine::IsConsoleActive() const [member function]\"" );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< xfx::Engine const > >( );
        bp::implicitly_convertible< boost::shared_ptr< xfx::Engine >, boost::shared_ptr< xfx::Engine const > >( );
    }

}
