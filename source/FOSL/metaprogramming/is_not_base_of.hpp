#ifndef _FOSL_METAPROGRAMMING_IS_NOT_BASE_OF_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_BASE_OF_HPP_

#include "FOSL/metaprogramming/is_base_of.hpp"

namespace FOSL::metaprogramming
{
	template <typename base, typename derived> constexpr bool
	is_not_base_of = not is_base_of<derived, base>;
}

#endif
