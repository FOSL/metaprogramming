#ifndef _FOSL_METAPROGRAMMING_IS_TRIVIAL_HPP_
#define _FOSL_METAPROGRAMMING_IS_TRIVIAL_HPP_

#include <type_traits>

namespace FOSL::metaprogramming
{
	template <typename type> constexpr bool
	is_trivial = std::is_trivial<type>::value;

	template <typename type>
	concept trivial = is_trivial<type>;
}

#endif
