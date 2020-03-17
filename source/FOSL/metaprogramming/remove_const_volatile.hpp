#ifndef _FOSL_METAPROGRAMMING_REMOVE_CONST_VOLATILE_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_CONST_VOLATILE_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename _type>
		struct remove_const_volatile
		{ using type = _type; };

		template <typename _type>
		struct remove_const_volatile<const _type>
		{ using type = _type; };

		template <typename _type>
		struct remove_const_volatile<volatile _type>
		{ using type = _type; };

		template <typename _type>
		struct remove_const_volatile<const volatile _type>
		{ using type = _type; };
	}

	template <typename type>
	using remove_const_volatile = typename internal::remove_const_volatile<type>::type;
}

#endif
