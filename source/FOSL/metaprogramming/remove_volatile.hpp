#ifndef _FOSL_METAPROGRAMMING_REMOVE_VOLATILE_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_VOLATILE_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename input_type> struct remove_volatile                      { using type = input_type; };
		template <typename input_type> struct remove_volatile<volatile input_type> { using type = input_type; };
	}

	template <typename input_type> using
	remove_volatile = typename internal::remove_volatile<input_type>::type;
}

#endif
