#ifndef _FOSL_METAPROGRAMMING_IS_NOT_TRIVIAL_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_TRIVIAL_HPP_

#include "FOSL/metaprogramming/is_trivial.hpp"

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_not_trivial = not is_trivial<type>;
}

#endif
