#ifndef _FOSL_METAPROGRAMMING_FALSE_TYPE_HPP_
#define _FOSL_METAPROGRAMMING_FALSE_TYPE_HPP_

namespace FOSL::metaprogramming
{
	struct false_type
	{
		static constexpr bool value = false;
		using type = false_type;
	};
}

#endif
