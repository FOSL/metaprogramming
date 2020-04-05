#ifndef _FOSL_METAPROGRAMMING_IS_DERIVABLE_HPP_
#define _FOSL_METAPROGRAMMING_IS_DERIVABLE_HPP_

#include <type_traits>

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_derivable = std::is_class<type>::value;
}

#endif
