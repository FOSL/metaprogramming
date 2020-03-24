#include <FOSL/metaprogramming//enable_if.hpp>
#include <FOSL/metaprogramming/disable_if.hpp>

#include <FOSL/metaprogramming//true_type.hpp>
#include <FOSL/metaprogramming/false_type.hpp>
#include <FOSL/metaprogramming/not_true_type.hpp>

using namespace FOSL::metaprogramming;

namespace dummy
{
	template<typename type,  enable_if<    type::value> = 0 > constexpr bool  enable_function_if(void) { return     true; }
	template<typename type,  enable_if<not type::value> = 0 > constexpr bool  enable_function_if(void) { return not true; }
	template<typename type, disable_if<    type::value> = 0 > constexpr bool disable_function_if(void) { return     true; }
	template<typename type, disable_if<not type::value> = 0 > constexpr bool disable_function_if(void) { return not true; }

	template<typename type,  enable_if<    type::value> = 0 > struct  enable_type_if :     true_type {};
//	template<typename type,  enable_if<not type::value> = 0 > struct  enable_type_if : not_true_type {};
	template<typename type, disable_if<    type::value> = 0 > struct disable_type_if :     true_type {};
//	template<typename type, disable_if<not type::value> = 0 > struct disable_type_if : not_true_type {};
}

int main(void)
{
	static_assert(dummy:: enable_function_if<    true_type>() ==     true);
	static_assert(dummy:: enable_function_if<not_true_type>() == not true);
	static_assert(dummy::disable_function_if<not_true_type>() ==     true);
	static_assert(dummy::disable_function_if<    true_type>() == not true);

// 	yet not sure how to test commented use cases
	static_assert(dummy:: enable_type_if<    true_type>::value ==     true);
//	static_assert(dummy:: enable_type_if<not_true_type>::value == not true);
	static_assert(dummy::disable_type_if<not_true_type>::value ==     true);
//	static_assert(dummy::disable_type_if<    true_type>::value == not true);

	return 0;
}
