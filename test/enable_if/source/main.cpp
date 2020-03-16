#include <FOSL/metaprogramming/enable_if.hpp>

using namespace FOSL::metaprogramming;

namespace dummy
{
	template< typename type
			, enable_if<type::value> = 0 >
	constexpr bool function(void) { return true; }

	template< typename type
			, enable_if<!type::value> = 0 >
	constexpr bool function(void) { return false; }

	struct  true_type { static constexpr bool value = true ; };
	struct false_type { static constexpr bool value = false; };
}

int main(void)
{
	static_assert(dummy::function<dummy:: true_type>() == true );
	static_assert(dummy::function<dummy::false_type>() == false);

	return 0;
}
