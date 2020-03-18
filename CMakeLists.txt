project(FOSL-metaprogramming CXX)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")

add_library(
	${PROJECT_NAME}

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming.cpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming.hpp

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/true_type.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/false_type.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/not_true_type.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_true.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_false.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_same.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_base_of.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_pointer_convertible.hpp

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/enable_if.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/disable_if.hpp

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/remove_const.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/remove_volatile.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/remove_const_volatile.hpp
)

target_include_directories(
	${PROJECT_NAME} PUBLIC

	${PROJECT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
)

add_subdirectory(test)
add_test(NAME conditional_enabling     COMMAND conditional_enabling.elf    )
add_test(NAME type_conditionals        COMMAND type_conditionals.elf       )
add_test(NAME removing_type_qualifiers COMMAND removing_type_qualifiers.elf)
