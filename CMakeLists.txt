# Simplification {{{
	set(CMAKE_MODULE_PATH
		"${CMAKE_MODULE_PATH}"
		"${CMAKE_CURRENT_SOURCE_DIR}/cmake/module/CMake_deployment/source")
	include(SimpleFOSLProject)
# }}}

project(metaprogramming # {{{
	VERSION 0.1.0.0
	LANGUAGES CXX
) # }}}

add_library(metaprogramming)
target_sources(metaprogramming # {{{
	PRIVATE
		metaprogramming.cpp
	PUBLIC
		metaprogramming.hpp

		metaprogramming/////true_type.hpp
		metaprogramming/not_true_type.hpp
		metaprogramming/////false_type.hpp
		metaprogramming/not_false_type.hpp

		metaprogramming/is_true.hpp
		metaprogramming/is_false.hpp
		metaprogramming/is_same.hpp
		metaprogramming/is_base_of.hpp
		metaprogramming/is_pointer_convertible.hpp
		metaprogramming/is_trivial.hpp
		metaprogramming/is_derivable.hpp

		metaprogramming/enable_if.hpp
		metaprogramming/disable_if.hpp

		metaprogramming/remove_const.hpp
		metaprogramming/remove_volatile.hpp
		metaprogramming/remove_const_volatile.hpp

		metaprogramming/require.hpp

		metaprogramming/add_rvalue_reference.hpp

		metaprogramming/declval.hpp
		metaprogramming/void_type.hpp
) # }}}
target_include_directories(metaprogramming # {{{
) # }}}
target_link_libraries(metaprogramming # {{{
) # }}}

# Testing {{{
if(${UPPERCASE_PROJECT_NAMESPACE}_${UPPERCASE_PROJECT_COMPONENT}_BUILD_TESTS)
	add_test(NAME conditional_enabling     COMMAND ${PROJECT_BINARY_DIR}/test/unit/conditional_enabling/main.elf    )
	add_test(NAME type_conditionals        COMMAND ${PROJECT_BINARY_DIR}/test/unit/type_conditionals/main.elf       )
	add_test(NAME removing_type_qualifiers COMMAND ${PROJECT_BINARY_DIR}/test/unit/removing_type_qualifiers/main.elf)
	add_subdirectory(test)
endif() # }}}
# Installation {{{
if(FOSL_UTILITY_INSTALL)
	install_project()
endif() # }}}
