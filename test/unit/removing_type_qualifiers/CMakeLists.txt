include(SimpleFOSLProjectTest)

find_package(FOSL
	COMPONENTS metaprogramming
	REQUIRED
)

project(removing_type_qualifiers)

add_executable(removing_type_qualifiers)
target_sources(removing_type_qualifiers
	PUBLIC
		${PROJECT_SOURCE_DIR}/main.cpp
)
target_link_libraries(removing_type_qualifiers
	PRIVATE
		FOSL::metaprogramming
)
