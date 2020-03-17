#ifndef _FOSL_METAPROGRAMMING_IS_POINTER_CONVERTIBLE_HPP_
#define _FOSL_METAPROGRAMMING_IS_POINTER_CONVERTIBLE_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename to>  true_type is_pointer_convertible(         to         *);
		template <typename   > false_type is_pointer_convertible(volatile void const *);
	}

	template <typename from, typename to>
	constexpr bool is_pointer_convertible(void)
	{
		return decltype( internal::is_pointer_convertible<to>(static_cast<from *>(nullptr))
		               )::value;
	}
}

#endif
