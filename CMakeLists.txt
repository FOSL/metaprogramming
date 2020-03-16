project(FOSL-metaprogramming CXX)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")

add_library(
	${PROJECT_NAME}

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming.cpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming.hpp

	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/true_type.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/false_type.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_true.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/is_false.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/enable_if.hpp
	${PROJECT_SOURCE_DIR}/FOSL/metaprogramming/disable_if.hpp
)

target_include_directories(
	${PROJECT_NAME} PUBLIC

	${PROJECT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
)

add_subdirectory(test)
add_test(NAME conditional_enabling COMMAND conditional_enabling.elf)
add_test(NAME    type_conditionals COMMAND    type_conditionals.elf)
