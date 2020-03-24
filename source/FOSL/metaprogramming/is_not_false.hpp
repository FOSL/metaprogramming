#ifndef _FOSL_METAPROGRAMMING_IS_NOT_FALSE_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_FALSE_HPP_

#include "FOSL/metaprogramming/is_false.hpp"

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_not_false = not is_false<type>;
}

#endif
