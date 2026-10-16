cmake_minimum_required(VERSION 3.20)
project(project_igi_native LANGUAGES C CXX)

include(CTest)

option(IGI_BUILD_RECOVERED_NATIVE_LIBRARY "Build the separate recovered-C research library and probes" OFF)
if(IGI_BUILD_RECOVERED_NATIVE_LIBRARY)
    add_subdirectory(assets/BinaryNinja/cproj)
endif()
add_subdirectory(engine)
