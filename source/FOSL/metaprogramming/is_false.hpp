#ifndef _FOSL_METAPROGRAMMING_IS_FALSE_HPP_
#define _FOSL_METAPROGRAMMING_IS_FALSE_HPP_

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_false = not type::value;
}

#endif
