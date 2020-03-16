#ifndef _FOSL_METAPROGRAMMING_IS_FALSE_HPP_
#define _FOSL_METAPROGRAMMING_IS_FALSE_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"

namespace FOSL::metaprogramming
{
	template <typename type> struct is_false             : false_type { };
	template <             > struct is_false<false_type> :  true_type { };
}

#endif
