// This file has been generated by Py++.

#include "xfx.h"
#include "boost/python.hpp"
#include "xfx_py_bindings.h"
#include "xfx_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitives::AABB const &,::xfx::Primitives::OBB const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitives::AABB const &,::xfx::Primitives::Triangle const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitives::OBB const &,::xfx::Primitives::OBB const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitives::AABB const &,::xfx::Primitives::AABB const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitives::Triangle const &,::xfx::Primitives::Triangle const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::xfx::Primitives::TestIntersection
    
        typedef bool ( *test_intersection_function_type )( ::xfx::Primitive const &,::xfx::Primitive const &,::xfx::Vec3 const & );
        
        bp::def( 
            "test_intersection"
            , test_intersection_function_type( &::xfx::Primitives::TestIntersection )
            , ( bp::arg("p1"), bp::arg("p2"), bp::arg("axis") ) );
    
    }

    { //::xfx::fromMBCS
    
        typedef ::xfx::WString ( *from_mbcs_function_type )( ::xfx::String const & );
        
        bp::def( 
            "from_mbcs"
            , from_mbcs_function_type( &::xfx::fromMBCS )
            , ( bp::arg("str") ) );
    
    }

    { //::xfx::fromUTF8
    
        typedef ::xfx::WString ( *from_utf8_function_type )( ::xfx::String const & );
        
        bp::def( 
            "from_utf8"
            , from_utf8_function_type( &::xfx::fromUTF8 )
            , ( bp::arg("str") ) );
    
    }

    { //::xfx::gGetApplication
    
        typedef ::xfx::Application & ( *application_function_type )(  );
        
        bp::def( 
            "application"
            , application_function_type( &::xfx::gGetApplication )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::xfx::math_acos
    
        typedef short int ( *math_acos_function_type )( float );
        
        bp::def( 
            "math_acos"
            , math_acos_function_type( &::xfx::math_acos )
            , ( bp::arg("c") ) );
    
    }

    { //::xfx::math_angle2deg
    
        typedef float ( *math_angle2deg_function_type )( int const & );
        
        bp::def( 
            "math_angle2deg"
            , math_angle2deg_function_type( &::xfx::math_angle2deg )
            , ( bp::arg("ang") ) );
    
    }

    { //::xfx::math_angle2rad
    
        typedef float ( *math_angle2rad_function_type )( int const & );
        
        bp::def( 
            "math_angle2rad"
            , math_angle2rad_function_type( &::xfx::math_angle2rad )
            , ( bp::arg("ang") ) );
    
    }

    { //::xfx::math_asin
    
        typedef short int ( *math_asin_function_type )( float );
        
        bp::def( 
            "math_asin"
            , math_asin_function_type( &::xfx::math_asin )
            , ( bp::arg("s") ) );
    
    }

    { //::xfx::math_cos
    
        typedef float ( *math_cos_function_type )( int );
        
        bp::def( 
            "math_cos"
            , math_cos_function_type( &::xfx::math_cos )
            , ( bp::arg("ang") ) );
    
    }

    { //::xfx::math_deg2angle
    
        typedef int ( *math_deg2angle_function_type )( float const & );
        
        bp::def( 
            "math_deg2angle"
            , math_deg2angle_function_type( &::xfx::math_deg2angle )
            , ( bp::arg("d") ) );
    
    }

    { //::xfx::math_frand
    
        typedef float ( *math_frand_function_type )(  );
        
        bp::def( 
            "math_frand"
            , math_frand_function_type( &::xfx::math_frand ) );
    
    }

    { //::xfx::math_invsqrt
    
        typedef float ( *math_invsqrt_function_type )( float );
        
        bp::def( 
            "math_invsqrt"
            , math_invsqrt_function_type( &::xfx::math_invsqrt )
            , ( bp::arg("x") ) );
    
    }

    { //::xfx::math_lerp_angle
    
        typedef int ( *math_lerp_angle_function_type )( int const &,int const &,float const & );
        
        bp::def( 
            "math_lerp_angle"
            , math_lerp_angle_function_type( &::xfx::math_lerp_angle )
            , ( bp::arg("u"), bp::arg("v"), bp::arg("t") ) );
    
    }

    { //::xfx::math_normalize_angle
    
        typedef short int ( *math_normalize_angle_function_type )( int );
        
        bp::def( 
            "math_normalize_angle"
            , math_normalize_angle_function_type( &::xfx::math_normalize_angle )
            , ( bp::arg("ang") ) );
    
    }

    { //::xfx::math_rad2angle
    
        typedef int ( *math_rad2angle_function_type )( float const & );
        
        bp::def( 
            "math_rad2angle"
            , math_rad2angle_function_type( &::xfx::math_rad2angle )
            , ( bp::arg("r") ) );
    
    }

    { //::xfx::math_sin
    
        typedef float ( *math_sin_function_type )( int );
        
        bp::def( 
            "math_sin"
            , math_sin_function_type( &::xfx::math_sin )
            , ( bp::arg("ang") ) );
    
    }

    { //::xfx::math_slerp_angle
    
        typedef short int ( *math_slerp_angle_function_type )( short int const &,short int const &,float const & );
        
        bp::def( 
            "math_slerp_angle"
            , math_slerp_angle_function_type( &::xfx::math_slerp_angle )
            , ( bp::arg("u"), bp::arg("v"), bp::arg("t") ) );
    
    }

    { //::xfx::math_sqrt
    
        typedef float ( *math_sqrt_function_type )( float );
        
        bp::def( 
            "math_sqrt"
            , math_sqrt_function_type( &::xfx::math_sqrt )
            , ( bp::arg("x") ) );
    
    }

    { //::xfx::toMBCS
    
        typedef ::xfx::String ( *to_mbcs_function_type )( ::xfx::WString const & );
        
        bp::def( 
            "to_mbcs"
            , to_mbcs_function_type( &::xfx::toMBCS )
            , ( bp::arg("str") ) );
    
    }

}
