#ifndef _FOSL_METAPROGRAMMING_IS_FALSE_HPP_
#define _FOSL_METAPROGRAMMING_IS_FALSE_HPP_

#include "FOSL/metaprogramming/is_true.hpp"

namespace FOSL::metaprogramming
{
	template <typename type>
	constexpr bool is_false(void)
	{
		return not type::value;
	}
}

#endif
