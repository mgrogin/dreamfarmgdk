//  File xfx.h                                                                |
//                                                                            |
//  Created by: Andrew "RevEn" Karpushin                                      |
//                                                                            |
//----------------------------------------------------------------------------+

#pragma once

/*!	\file xfx.h 
 *	\brief Base configuration file for library.
 */


#include "../shared.h"




//
// Additional libraries
//

#include <crtdbg.h>		//search for memory leaks

// OpenMP
#if _MSC_VER < 1500
#include <omp.h>
#endif

// STL
//#include <map>
//#include <list>
//#include <numeric>
//#include <algorithm>
//#include <vector>
//#include <deque>
//#include <memory>
#include <string>
//#include <stack>
//#include <iterator>
//#include <functional>
//#include <bitset>
//#include <set>
//#include <iostream>
//#include <fstream>
#include <hash_map>

// Boost
#include <boost/array.hpp>
#include <boost/scoped_ptr.hpp>
//#include <boost/weak_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/scoped_array.hpp>
#include <boost/noncopyable.hpp>
//#include <boost/any.hpp>
//#include <boost/cast.hpp>
//#include <boost/static_assert.hpp>
#include <boost/bind.hpp>
//#include <boost/mem_fn.hpp>
//#include <boost/shared_container_iterator.hpp>
//#include <boost/function_output_iterator.hpp>
//#include <boost/iterator/filter_iterator.hpp>
//#include <boost/iterator/permutation_iterator.hpp>
//#include <boost/iterator/indirect_iterator.hpp>
//#include <boost/utility.hpp>
//#include <boost/pool/pool_alloc.hpp>
#include <boost/functional/hash.hpp>
#include <boost/function.hpp>
#include <boost/signals.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/format.hpp>
//#include <boost/thread.hpp>
#include <boost/foreach.hpp>
#include <boost/cstdint.hpp>
#include <boost/type_traits.hpp>
#include <boost/circular_buffer.hpp>


// Boost.MPL
//#include <boost/mpl/vector.hpp>
//#include <boost/mpl/vector_c.hpp>
//#include <boost/mpl/min_max.hpp>


// forward definition to use serialization
namespace boost { namespace serialization {
	class access;
} };




// LUA
extern "C"
{
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}


// LuaBind
#pragma warning( push )
#pragma warning( disable : 4127 ) // conditional expression is constant
#pragma warning( disable : 4100 ) // unreferenced formal parameter
#include <luabind/luabind.hpp>
#include <luabind/discard_result_policy.hpp>
#include <luabind/out_value_policy.hpp>
#include <luabind/raw_policy.hpp>
#pragma warning( pop )



// CEGUI
#pragma warning( push )
#pragma warning( disable : 4251 ) // class ... needs to have dll interface
#include <cegui.h>
#include <ceguilua.h>
#pragma warning( pop )




// D3D
#if( __XFX_DIRECTX_VER__ < 9 )
#include <d3d8.h>
#include <d3dx8.h>
#else
#include <d3d9.h>
#include <d3dx9.h>
#endif





// XFX
#include "utility\xfx_singleton.h"
#include "utility\xfx_string.h"
#include "utility\xfx_utils.h"
#include "utility\xfx_argb.h"
#include "utility\xfx_log.h"
#include "utility\xfx_profiler.h"
#include "utility\xfx_script.h"
#include "utility\xfx_cache.h"
#include "math\xfx_vec2.h"
#include "math\xfx_vec3.h"
#include "math\xfx_vec4.h"
#include "math\xfx_euler.h"
#include "math\xfx_mat3.h"
#include "math\xfx_mat4.h"
#include "math\xfx_primitives.h"
#include "math\xfx_transformable.h"
#include "main\xfx_errorcodes.h"
#include "main\xfx_fs.h"
#include "lua\xfx_luascript.h"
#include "renderer\xfx_renderer.h"
#include "renderer\xfx_texture.h"
#include "renderer\xfx_shader.h"
#include "renderer\xfx_viewport.h"
