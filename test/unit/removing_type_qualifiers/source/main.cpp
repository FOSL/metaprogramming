#include <FOSL/metaprogramming/is_same.hpp>

#include <FOSL/metaprogramming/remove_const.hpp>
#include <FOSL/metaprogramming/remove_volatile.hpp>
#include <FOSL/metaprogramming/remove_const_volatile.hpp>

int main(void)
{
	using namespace FOSL::metaprogramming;

	{
		struct               T { };
		using          const_T = const          T;
		using       volatile_T =       volatile T;
		using const_volatile_T = const volatile T;

		static_assert(is_same<remove_const<               T>,          T>);
		static_assert(is_same<remove_const<         const_T>,          T>);
		static_assert(is_same<remove_const<      volatile_T>, volatile_T>);
		static_assert(is_same<remove_const<const_volatile_T>, volatile_T>);

		static_assert(is_same<remove_volatile<               T>,       T>);
		static_assert(is_same<remove_volatile<         const_T>, const_T>);
		static_assert(is_same<remove_volatile<      volatile_T>,       T>);
		static_assert(is_same<remove_volatile<const_volatile_T>, const_T>);

		static_assert(is_same<remove_const_volatile<               T>, T>);
		static_assert(is_same<remove_const_volatile<         const_T>, T>);
		static_assert(is_same<remove_const_volatile<      volatile_T>, T>);
		static_assert(is_same<remove_const_volatile<const_volatile_T>, T>);
	}

	return 0;
}
