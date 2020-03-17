#ifndef _FOSL_METAPROGRAMMING_ENABLE_IF_HPP_
#define _FOSL_METAPROGRAMMING_ENABLE_IF_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <bool>
		struct enable_if;

		template <>
		struct enable_if<true>
		{
			using type = bool;
		};
	}

	template <bool conditional>
	using enable_if = typename internal::enable_if<conditional>::type;
}

#endif
