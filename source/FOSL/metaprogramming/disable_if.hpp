#ifndef _FOSL_METAPROGRAMMING_DISABLE_IF_HPP_
#define _FOSL_METAPROGRAMMING_DISABLE_IF_HPP_

#include "FOSL/metaprogramming/enable_if.hpp"

namespace FOSL::metaprogramming
{
	template <bool condition> using
	disable_if = enable_if<!condition>;
}

#endif
