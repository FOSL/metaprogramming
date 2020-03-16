#include <FOSL/metaprogramming//true_type.hpp>
#include <FOSL/metaprogramming/false_type.hpp>
#include <FOSL/metaprogramming//is_true.hpp>
#include <FOSL/metaprogramming/is_false.hpp>
#include <FOSL/metaprogramming/is_same.hpp>

int main(void)
{
	using namespace FOSL::metaprogramming;

	static_assert(    is_true < true_type>::value);
	static_assert(not is_true <false_type>::value);
	static_assert(not is_false< true_type>::value);
	static_assert(    is_false<false_type>::value);

	struct O { };
	struct I { };
	static_assert(    is_same<O, O>::value);
	static_assert(not is_same<O, I>::value);
	static_assert(not is_same<I, O>::value);
	static_assert(    is_same<I, I>::value);

	return 0;
}
