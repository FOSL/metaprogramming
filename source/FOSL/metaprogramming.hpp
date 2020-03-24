#ifndef _FOSL_METAPROGRAMMING_HPP_
#define _FOSL_METAPROGRAMMING_HPP_

#include <type_traits>

#include "FOSL/metaprogramming//////true_type.hpp"
#include "FOSL/metaprogramming/not_true_type.hpp"
#include "FOSL/metaprogramming/////false_type.hpp"
#include "FOSL/metaprogramming/not_false_type.hpp"

#include "FOSL/metaprogramming/////is_true.hpp"
#include "FOSL/metaprogramming/is_not_true.hpp"
#include "FOSL/metaprogramming/is_false.hpp"
#include "FOSL/metaprogramming/is_same.hpp"
#include "FOSL/metaprogramming/is_not_same.hpp"
#include "FOSL/metaprogramming/is_pointer_convertible.hpp"
#include "FOSL/metaprogramming/is_not_pointer_convertible.hpp"
#include "FOSL/metaprogramming/is_base_of.hpp"
#include "FOSL/metaprogramming/is_not_base_of.hpp"
#include "FOSL/metaprogramming/is_trivial.hpp"
#include "FOSL/metaprogramming/is_not_trivial.hpp"

#include "FOSL/metaprogramming/remove_const.hpp"
#include "FOSL/metaprogramming/remove_volatile.hpp"
#include "FOSL/metaprogramming/remove_const_volatile.hpp"

#include "FOSL/metaprogramming/enable_if.hpp"
#include "FOSL/metaprogramming/disable_if.hpp"
#include "FOSL/metaprogramming/require.hpp"

#include "FOSL/metaprogramming/add_rvalue_reference.hpp"

#include "FOSL/metaprogramming/declval.hpp"

namespace FOSL::metaprogramming
{
}

#endif
