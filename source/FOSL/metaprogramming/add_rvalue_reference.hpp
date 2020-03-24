#ifndef _FOSL_METAPROGRAMMING_ADD_RVALUE_REFERENCE_HPP_
#define _FOSL_METAPROGRAMMING_ADD_RVALUE_REFERENCE_HPP_

namespace FOSL::metaprogramming
{
	namespace internal
	{
		template <typename input_type>
		struct add_rvalue_reference
		{
			using type = input_type &&;
		};
	}

	template <typename input_type> using
	add_rvalue_reference = typename internal::add_rvalue_reference<input_type>::type;
}

#endif
