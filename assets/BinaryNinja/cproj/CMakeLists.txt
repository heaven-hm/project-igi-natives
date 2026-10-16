cmake_minimum_required(VERSION 3.20)
project(igi_natives C)

include(CTest)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(src)

add_compile_options(
    -O2
    -w
    -Wno-everything
    -fno-common
)

# Load the compiler-tested build allowlist if present
set(LIB_SRCS "src/gi_stubs.c" "src/gi_memory.c")
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/clean_sources.json")
    file(READ "${CMAKE_CURRENT_SOURCE_DIR}/clean_sources.json" CLEAN_JSON)
    string(JSON OK_COUNT LENGTH "${CLEAN_JSON}" "ok")
    math(EXPR MAX_IDX "${OK_COUNT} - 1")
    foreach(IDX RANGE 0 ${MAX_IDX})
        string(JSON SRC_FILE GET "${CLEAN_JSON}" "ok" ${IDX})
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/${SRC_FILE}" AND
           NOT "${SRC_FILE}" STREQUAL "main_runner.c" AND
           NOT "${SRC_FILE}" STREQUAL "gi_stubs.c" AND
           NOT "${SRC_FILE}" STREQUAL "004CDB20-World_TraceBatch.c")
            list(APPEND LIB_SRCS "src/${SRC_FILE}")
        endif()
    endforeach()
    message(STATUS "Loaded ${OK_COUNT} compile-allowlisted C sources from clean_sources.json")
else()
    file(GLOB LIB_SRCS CONFIGURE_DEPENDS "src/*.c")
    list(FILTER LIB_SRCS EXCLUDE REGEX ".*main_runner\\.c$")
endif()

# Movement translations remain partial. The generated World_TraceBatch translation
# is excluded because its fifth-argument type contradicts the verified x86 ABI.
# Wall and ground collision therefore resolve to the explicit unavailable-provider stub.
foreach(MOVEMENT_SOURCE
        "src/004614B0-Human_MovementIntegrator.c"
        "src/00461A70-Human_WallSweep.c"
        "src/00462BA0-Human_Separation.c"
        "src/gi_human_candidates_stub.c")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${MOVEMENT_SOURCE}" AND NOT MOVEMENT_SOURCE IN_LIST LIB_SRCS)
        list(APPEND LIB_SRCS "${MOVEMENT_SOURCE}")
    endif()
endforeach()

# The native allocator was excluded from the compiler allowlist because its
# decompiler output used the wrong host allocator signature. Its portable host
# heap translation now replaces the weak fallback in gi_stubs.c.
foreach(PORTED_NATIVE_SOURCE
        "src/004B0C60-Mem_Alloc.c"
        "src/004B0D60-Qhash_Init.c"
        "src/004B0D90-Qhash_Reset.c")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${PORTED_NATIVE_SOURCE}" AND
       NOT PORTED_NATIVE_SOURCE IN_LIST LIB_SRCS)
        list(APPEND LIB_SRCS "${PORTED_NATIVE_SOURCE}")
    endif()
endforeach()

foreach(COLLISION_SOURCE
        "src/00461A70-Human_WallSweep.c"
        "src/00462390-Human_GroundQuery.c")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${COLLISION_SOURCE}" AND NOT COLLISION_SOURCE IN_LIST LIB_SRCS)
        message(WARNING "Player movement still uses a weak collision fallback: ${COLLISION_SOURCE}")
    endif()
endforeach()

# Build macOS shared library libiginatives.dylib
add_library(iginatives SHARED ${LIB_SRCS})
target_link_libraries(iginatives PRIVATE m)

set_target_properties(iginatives PROPERTIES
    PREFIX "lib"
    OUTPUT_NAME "iginatives"
    LINK_FLAGS "-Wl,-undefined,dynamic_lookup"
    INSTALL_NAME_DIR "@rpath"
    BUILD_WITH_INSTALL_RPATH TRUE
)

# Build macOS native test runner
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/main_runner.c")
    add_executable(igi_natives_runner src/main_runner.c)
    target_link_libraries(igi_natives_runner PRIVATE iginatives)
    set_target_properties(igi_natives_runner PROPERTIES
        BUILD_RPATH "@loader_path;@loader_path/."
        INSTALL_RPATH "@loader_path;@loader_path/."
    )
endif()

if(BUILD_TESTING)
    add_executable(qtask_event_probe
        tests/qtask_event_probe.c
        src/004011D0-QTask_OnEvent.c
        src/gi_memory.c
    )
    target_include_directories(qtask_event_probe PRIVATE src)
    add_test(NAME qtask_event_table_clear COMMAND qtask_event_probe)

    add_executable(sys_free_memory_guest_heap_probe
        tests/sys_free_memory_guest_heap_probe.c
        src/004B0B00-Sys_FreeMemory_2.c
        src/gi_memory.c
    )
    target_include_directories(sys_free_memory_guest_heap_probe PRIVATE src)
    add_test(NAME sys_free_memory_guest_heap COMMAND sys_free_memory_guest_heap_probe)

    add_executable(native_heap_probe
        tests/native_heap_probe.c
        src/004B0C60-Mem_Alloc.c
        src/004B0BE0-Mem_DeallocAll.c
        src/004B0D50-Sys_DispatchOpcode_2.c
        src/gi_memory.c
    )
    target_include_directories(native_heap_probe PRIVATE src)
    add_test(NAME native_heap_lifecycle COMMAND native_heap_probe)

    add_executable(qhash_stack_probe
        tests/qhash_stack_probe.c
        src/004B0D60-Qhash_Init.c
        src/004B0D90-Qhash_Reset.c
        src/gi_memory.c
    )
    target_include_directories(qhash_stack_probe PRIVATE src)
    add_test(NAME qhash_stack_lifecycle COMMAND qhash_stack_probe)
endif()
