#ifndef _FOSL_METAPROGRAMMING_IS_NOT_TRUE_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_TRUE_HPP_

#include "FOSL/metaprogramming/is_true.hpp"

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_not_true = not is_true<type>;
}

#endif
