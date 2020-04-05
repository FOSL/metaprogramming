include(SimpleFOSLProjectTest)

find_package(FOSL
	COMPONENTS metaprogramming
	REQUIRED
)

project(unsorted)

add_executable(unsorted)
target_sources(unsorted
	PUBLIC
		${PROJECT_SOURCE_DIR}/main.cpp
)
target_link_libraries(unsorted
	PRIVATE
		FOSL::metaprogramming
)
