#ifndef _FOSL_METAPROGRAMMING_REQUIRE_HPP_
#define _FOSL_METAPROGRAMMING_REQUIRE_HPP_

#include "FOSL/metaprogramming/void_type.hpp"
#include "FOSL/metaprogramming/enable_if.hpp"

namespace FOSL::metaprogramming
{
// 	template <typename ...sfinae_types> using
// 	require = void;
	template <typename ...types> using
	require = void_type<enable_if<types{}>...>;
}

#endif
