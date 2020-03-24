#ifndef _FOSL_METAPROGRAMMING_IS_NOT_POINTER_CONVERTIBLE_HPP_
#define _FOSL_METAPROGRAMMING_IS_NOT_POINTER_CONVERTIBLE_HPP_

#include "FOSL/metaprogramming/is_pointer_convertible.hpp"

namespace FOSL::metaprogramming
{
	template <typename from, typename to> constexpr bool
	is_not_pointer_convertible = not is_pointer_convertible<from, to>;
}

#endif
