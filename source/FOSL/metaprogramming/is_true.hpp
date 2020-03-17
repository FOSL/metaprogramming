#ifndef _FOSL_METAPROGRAMMING_IS_TRUE_HPP_
#define _FOSL_METAPROGRAMMING_IS_TRUE_HPP_

namespace FOSL::metaprogramming
{
	template <typename type>
	constexpr bool is_true(void)
	{
		return type::value;
	}
}

#endif
