// This file has been generated by Py++.

#include "xfx.h"
#include "boost/python.hpp"
#include "xfx_py_bindings.h"
#include "cache_less__xfx_scope_effect__greater_.pypp.hpp"

namespace bp = boost::python;

void register_Cache_less__xfx_scope_Effect__greater__class(){

    { //::xfx::Cache< xfx::Effect >
        typedef bp::class_< xfx::Cache< xfx::Effect > > Cache_less__xfx_scope_Effect__greater__exposer_t;
        Cache_less__xfx_scope_Effect__greater__exposer_t Cache_less__xfx_scope_Effect__greater__exposer = Cache_less__xfx_scope_Effect__greater__exposer_t( "Cache_less__xfx_scope_Effect__greater_", bp::init< >() );
        bp::scope Cache_less__xfx_scope_Effect__greater__scope( Cache_less__xfx_scope_Effect__greater__exposer );
        { //::xfx::Cache< xfx::Effect >::Clear
        
            typedef xfx::Cache< xfx::Effect > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            Cache_less__xfx_scope_Effect__greater__exposer.def( 
                "clear"
                , clear_function_type( &::xfx::Cache< xfx::Effect >::Clear ) );
        
        }
        { //::xfx::Cache< xfx::Effect >::Register
        
            typedef xfx::Cache< xfx::Effect > exported_class_t;
            typedef ::boost::shared_ptr< xfx::Effect const > ( exported_class_t::*register_function_type )( ::std::string const & ) ;
            
            Cache_less__xfx_scope_Effect__greater__exposer.def( 
                "register"
                , register_function_type( &::xfx::Cache< xfx::Effect >::Register )
                , ( bp::arg("filename") ) );
        
        }
        { //::xfx::Cache< xfx::Effect >::Register
        
            typedef xfx::Cache< xfx::Effect > exported_class_t;
            typedef ::HRESULT ( exported_class_t::*register_function_type )( ::xfx::Effect &,::std::string const & ) ;
            
            Cache_less__xfx_scope_Effect__greater__exposer.def( 
                "register"
                , register_function_type( &::xfx::Cache< xfx::Effect >::Register )
                , ( bp::arg("object"), bp::arg("filename") ) );
        
        }
        { //::xfx::Cache< xfx::Effect >::ReloadAll
        
            typedef xfx::Cache< xfx::Effect > exported_class_t;
            typedef void ( exported_class_t::*reload_all_function_type )(  ) ;
            
            Cache_less__xfx_scope_Effect__greater__exposer.def( 
                "reload_all"
                , reload_all_function_type( &::xfx::Cache< xfx::Effect >::ReloadAll ) );
        
        }
        { //::xfx::Cache< xfx::Effect >::Unregister
        
            typedef xfx::Cache< xfx::Effect > exported_class_t;
            typedef void ( exported_class_t::*unregister_function_type )( ::boost::shared_ptr< xfx::Effect const > const & ) ;
            
            Cache_less__xfx_scope_Effect__greater__exposer.def( 
                "unregister"
                , unregister_function_type( &::xfx::Cache< xfx::Effect >::Unregister )
                , ( bp::arg("object") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< xfx::Cache<xfx::Effect> const > >( );
        bp::implicitly_convertible< boost::shared_ptr< xfx::Cache<xfx::Effect> >, boost::shared_ptr< xfx::Cache<xfx::Effect> const > >( );
    }

}
