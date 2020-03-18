#ifndef _FOSL_METAPROGRAMMING_REMOVE_CONST_HPP_
#define _FOSL_METAPROGRAMMING_REMOVE_CONST_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename input_type> struct remove_const                   { using type = input_type; };
		template <typename input_type> struct remove_const<const input_type> { using type = input_type; };
	}

	template <typename input_type> using
	remove_const = typename internal::remove_const<input_type>::type;
}

#endif
