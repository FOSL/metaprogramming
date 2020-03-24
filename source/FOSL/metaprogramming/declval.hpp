#ifndef _FOSL_METAPROGRAMMING_DECLVAL_HPP_
#define _FOSL_METAPROGRAMMING_DECLVAL_HPP_

#include "FOSL/metaprogramming/add_rvalue_reference.hpp"

namespace FOSL::metaprogramming
{
	template <typename type> using
	declval = add_rvalue_reference<type>;
}

#endif
