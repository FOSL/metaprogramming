#include <FOSL/metaprogramming//enable_if.hpp>
#include <FOSL/metaprogramming/disable_if.hpp>

#include <FOSL/metaprogramming//true_type.hpp>
#include <FOSL/metaprogramming/false_type.hpp>

using namespace FOSL::metaprogramming;

namespace dummy
{
	template< typename type
			, enable_if<type::value> = 0 >
	constexpr bool enable_if_function(void) { return true; }
	template< typename type
			, enable_if<!type::value> = 0 >
	constexpr bool enable_if_function(void) { return false; }

	template< typename type
			, enable_if<type::value> = 0 >
	constexpr bool disable_if_function(void) { return false; }
	template< typename type
			, enable_if<!type::value> = 0 >
	constexpr bool disable_if_function(void) { return true; }
}

int main(void)
{
	static_assert(dummy:: enable_if_function< true_type>() == true );
	static_assert(dummy:: enable_if_function<false_type>() == false);
	static_assert(dummy::disable_if_function< true_type>() == false);
	static_assert(dummy::disable_if_function<false_type>() == true );

	return 0;
}
