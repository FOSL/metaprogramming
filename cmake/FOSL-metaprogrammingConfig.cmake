include(CMakeFindDependencyMacro)
find_dependency(FOSL COMPONENT utility)
include("${CMAKE_CURRENT_LIST_DIR}/FOSL-metaprogrammingTargets.cmake")
