#ifndef _FOSL_METAPROGRAMMING_REMOVE_CONST_VOLATILE_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_CONST_VOLATILE_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename input_type> struct remove_const_volatile                            { using type = input_type; };
		template <typename input_type> struct remove_const_volatile<const          input_type> { using type = input_type; };
		template <typename input_type> struct remove_const_volatile<      volatile input_type> { using type = input_type; };
		template <typename input_type> struct remove_const_volatile<const volatile input_type> { using type = input_type; };
	}

	template <typename input_type> using
	remove_const_volatile = typename internal::remove_const_volatile<input_type>::type;
}

#endif
