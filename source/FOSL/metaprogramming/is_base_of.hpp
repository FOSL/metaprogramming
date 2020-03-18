#ifndef _FOSL_METAPROGRAMMING_IS_BASE_OF_HPP_
#define _FOSL_METAPROGRAMMING_IS_BASE_OF_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"
#include "FOSL/metaprogramming/remove_const_volatile.hpp"
#include "FOSL/metaprogramming/is_pointer_convertible.hpp"

namespace FOSL::metaprogramming
{
	template <typename base, typename derived> constexpr bool
	is_base_of = is_pointer_convertible< remove_const_volatile<derived>
		                               , remove_const_volatile<base   > >;
}

#endif
