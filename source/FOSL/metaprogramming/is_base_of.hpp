#ifndef _FOSL_METAPROGRAMMING_IS_BASE_OF_HPP_
#define _FOSL_METAPROGRAMMING_IS_BASE_OF_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"
#include "FOSL/metaprogramming/is_same.hpp"

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename type1, typename type2>
		struct is_base_of : false_type { };

		template <typename type>
		struct is_base_of<type, type> : true_type { };
	}

	template <typename type1, typename type2>
	constexpr bool is_base_of(void)
	{
		return internal::is_base_of<type1, type2>::value;
	}
}

#endif
