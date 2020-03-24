#include <FOSL/metaprogramming.hpp>

int main(void)
{
	using namespace FOSL::metaprogramming;

	{
		struct T {};

		static_assert(not is_same<T  , add_rvalue_reference<T  >>);
		static_assert(not is_same<T& , add_rvalue_reference<T  >>);
		static_assert(    is_same<T&&, add_rvalue_reference<T  >>);
		static_assert(not is_same<T  , add_rvalue_reference<T& >>);
		static_assert(    is_same<T& , add_rvalue_reference<T& >>);
		static_assert(not is_same<T&&, add_rvalue_reference<T& >>);
		static_assert(not is_same<T  , add_rvalue_reference<T&&>>);
		static_assert(not is_same<T& , add_rvalue_reference<T&&>>);
		static_assert(    is_same<T&&, add_rvalue_reference<T&&>>);
	}
}
