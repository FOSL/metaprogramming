include(SimpleFOSLProjectTest)

find_package(FOSL
	COMPONENTS metaprogramming
	REQUIRED
)

project(conditional_enabling)

add_executable(conditional_enabling)
target_sources(conditional_enabling
	PUBLIC
		${PROJECT_SOURCE_DIR}/main.cpp
)
target_link_libraries(conditional_enabling
	PRIVATE
		FOSL::metaprogramming
)
