#ifndef _FOSL_METAPROGRAMMING_REMOVE_VOLATILE_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_VOLATILE_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename _type>
		struct remove_volatile
		{ using type = _type; };

		template <typename _type>
		struct remove_volatile<volatile _type>
		{ using type = _type; };
	}

	template <typename type>
	using remove_volatile = typename internal::remove_volatile<type>::type;
}

#endif
