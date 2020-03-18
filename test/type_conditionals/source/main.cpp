#include <FOSL/metaprogramming//true_type.hpp>
#include <FOSL/metaprogramming/false_type.hpp>
#include <FOSL/metaprogramming//is_true.hpp>
#include <FOSL/metaprogramming/is_false.hpp>
#include <FOSL/metaprogramming/is_pointer_convertible.hpp>
#include <FOSL/metaprogramming/is_same.hpp>
#include <FOSL/metaprogramming/is_base_of.hpp>

int main(void)
{
	using namespace FOSL::metaprogramming;

	{
		static_assert(    is_true < true_type>);
		static_assert(not is_true <false_type>);
		static_assert(not is_false< true_type>);
		static_assert(    is_false<false_type>);
	}
	{
		struct O { };
		struct I { };

		static_assert(    is_same<O, O>);
		static_assert(not is_same<O, I>);
		static_assert(not is_same<I, O>);
		static_assert(    is_same<I, I>);
	}
	{
		struct T     { };
		struct B     { };
		struct D : B { };

		static_assert(    is_pointer_convertible<B, B>);
		static_assert(not is_pointer_convertible<B, D>);
		static_assert(    is_pointer_convertible<D, B>);
		static_assert(    is_pointer_convertible<D, D>);

		static_assert(not is_pointer_convertible<T, B>);
		static_assert(not is_pointer_convertible<T, D>);

		static_assert(    is_pointer_convertible<         T      ,          T      >);
		static_assert(not is_pointer_convertible<         T const,          T      >);
		static_assert(    is_pointer_convertible<         T      ,          T const>);
		static_assert(    is_pointer_convertible<         T const,          T const>);
		static_assert(    is_pointer_convertible<         T      ,          T      >);
		static_assert(not is_pointer_convertible<volatile T      ,          T      >);
		static_assert(    is_pointer_convertible<         T      , volatile T      >);
		static_assert(    is_pointer_convertible<volatile T      , volatile T      >);
		static_assert(    is_pointer_convertible<         T      ,          T      >);
		static_assert(not is_pointer_convertible<volatile T const,          T      >);
		static_assert(    is_pointer_convertible<         T      , volatile T const>);
		static_assert(    is_pointer_convertible<volatile T const, volatile T const>);
	}
	{
		struct T     { };
		struct B     { };
		struct D : B { };

		static_assert(    is_base_of<B, B>);
		static_assert(    is_base_of<B, D>);
		static_assert(not is_base_of<D, B>);
		static_assert(    is_base_of<D, D>);

		static_assert(    is_base_of<      B,       B>);
		static_assert(    is_base_of<      B, const D>);
		static_assert(not is_base_of<const D,       B>);
		static_assert(    is_base_of<const D, const D>);

		static_assert(    is_base_of<         B,          B>);
		static_assert(    is_base_of<         B, volatile D>);
		static_assert(not is_base_of<volatile D,          B>);
		static_assert(    is_base_of<volatile D, volatile D>);

		static_assert(    is_base_of<               B,                B>);
		static_assert(    is_base_of<               B, const volatile D>);
		static_assert(not is_base_of<const volatile D,                B>);
		static_assert(    is_base_of<const volatile D, const volatile D>);

		static_assert(not is_base_of<T, B>);
		static_assert(not is_base_of<T, D>);
	}

	return 0;
}
