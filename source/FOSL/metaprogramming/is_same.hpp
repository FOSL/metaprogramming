#ifndef _FOSL_METAPROGRAMMING_IS_SAME_HPP_
#define _FOSL_METAPROGRAMMING_IS_SAME_HPP_

#include "FOSL/metaprogramming/true_type.hpp"
#include "FOSL/metaprogramming/false_type.hpp"

namespace FOSL::metaprogramming
{
	template <typename type1, typename type2> struct is_same             : false_type { };
	template <typename type                 > struct is_same<type, type> :  true_type { };
}

#endif