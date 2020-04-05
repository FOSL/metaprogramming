#ifndef _FOSL_METAPROGRAMMING_VOID_TYPE_HPP_
#define _FOSL_METAPROGRAMMING_VOID_TYPE_HPP_

namespace FOSL::metaprogramming
{
	template <typename ...sfinae_types> using
	void_type = void;
}

#endif
