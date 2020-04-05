include(SimpleFOSLProjectTest)

find_package(FOSL
	COMPONENTS metaprogramming
	REQUIRED
)

project(type_conditionals)

add_executable(type_conditionals)
target_sources(type_conditionals
	PUBLIC
		${PROJECT_SOURCE_DIR}/main.cpp
)
target_link_libraries(type_conditionals
	PRIVATE
		FOSL::metaprogramming
)
