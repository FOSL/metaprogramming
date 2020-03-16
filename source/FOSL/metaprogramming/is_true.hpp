#ifndef _FOSL_METAPROGRAMMING_IS_TRUE_HPP_
#define _FOSL_METAPROGRAMMING_IS_TRUE_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename type> struct is_true            : false_type { };
		template <             > struct is_true<true_type> :  true_type { };
	}

	template <typename type>
	constexpr auto is_true(void)
	{
		return internal::is_true<type>::value;
	}
}

#endif
