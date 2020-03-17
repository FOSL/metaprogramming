#ifndef _FOSL_METAPROGRAMMING_REMOVE_CONST_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_CONST_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename _type>
		struct remove_const
		{ using type = _type; };

		template <typename _type>
		struct remove_const<const _type>
		{ using type = _type; };
	}

	template <typename type>
	using remove_const = typename internal::remove_const<type>::type;
}

#endif
