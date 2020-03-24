#ifndef _FOSL_METAPROGRAMMING_IS_NOT_SAME_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_SAME_HPP_

#include "FOSL/metaprogramming/is_same.hpp"

namespace FOSL::metaprogramming
{
	template <typename type1, typename type2> constexpr bool
	is_not_same = not is_same<type1, type2>;
}

#endif
