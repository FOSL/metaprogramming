#ifndef _FOSL_METAPROGRAMMING_HPP_
#define _FOSL_METAPROGRAMMING_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <bool>
		struct enable_if;

		template <>
		struct enable_if<true>
		{
			using type = int;
		};
	}

	template <bool conditional>
	using enable_if = typename internal::enable_if<conditional>::type;
}

#endif
