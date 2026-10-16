cmake_minimum_required(VERSION 3.20)
project(igi_natives C)

include(CTest)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(src)

if(CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    add_compile_options(-O2 -w -fno-common)
    if(CMAKE_C_COMPILER_ID MATCHES "Clang")
        add_compile_options(-Wno-everything)
    endif()
elseif(MSVC)
    add_compile_options(/O2 /w)
endif()

find_package(SDL2 REQUIRED CONFIG)

# Load the compiler-tested build allowlist if present
set(LIB_SRCS "src/gi_stubs.c" "src/gi_memory.c" "src/gi_clock.c")
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

# Movement translations remain partial. The generated World_TraceBatch body is
# excluded because its decompiler output has not been normalized against the x86
# ABI and output-record semantics. The portable declaration is based on retail
# call sites; wall and ground collision still use the unavailable provider.
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

# Build the recovered C library using the target platform's shared-library format.
add_library(iginatives SHARED ${LIB_SRCS})
target_link_libraries(iginatives PRIVATE SDL2::SDL2)
if(UNIX)
    target_link_libraries(iginatives PRIVATE m)
endif()

set_target_properties(iginatives PROPERTIES
    PREFIX "lib"
    OUTPUT_NAME "iginatives"
)

if(APPLE)
    target_link_options(iginatives PRIVATE "-Wl,-undefined,dynamic_lookup")
    set_target_properties(iginatives PROPERTIES
        INSTALL_NAME_DIR "@rpath"
        BUILD_WITH_INSTALL_RPATH TRUE
    )
elseif(UNIX)
    set_target_properties(iginatives PROPERTIES BUILD_RPATH "$ORIGIN")
endif()

# The diagnostic runner uses POSIX signals, ucontext, and dladdr.
if(UNIX AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/main_runner.c")
    add_executable(igi_natives_runner src/main_runner.c)
    target_link_libraries(igi_natives_runner PRIVATE iginatives)
    if(APPLE)
        set_target_properties(igi_natives_runner PROPERTIES
            BUILD_RPATH "@loader_path;@loader_path/."
            INSTALL_RPATH "@loader_path;@loader_path/."
        )
    else()
        set_target_properties(igi_natives_runner PROPERTIES
            BUILD_RPATH "$ORIGIN"
            INSTALL_RPATH "$ORIGIN"
        )
    endif()
endif()

if(BUILD_TESTING)
    add_executable(cproj_human_movement_integrator_probe
        tests/human_movement_integrator_probe.c
        src/004614B0-Human_MovementIntegrator.c
    )
    target_include_directories(cproj_human_movement_integrator_probe PRIVATE src)
    if(UNIX)
        target_link_libraries(cproj_human_movement_integrator_probe PRIVATE m)
    endif()
    add_test(
        NAME human_movement_integrator_collision_order
        COMMAND cproj_human_movement_integrator_probe
    )

    add_executable(human_wall_sweep_probe
        tests/human_wall_sweep_probe.c
        src/00461A70-Human_WallSweep.c
    )
    target_include_directories(human_wall_sweep_probe PRIVATE src)
    if(UNIX)
        target_link_libraries(human_wall_sweep_probe PRIVATE m)
    endif()
    add_test(NAME human_wall_sweep_single_wall_response COMMAND human_wall_sweep_probe)

    add_executable(world_trace_abi_probe
        tests/world_trace_abi_probe.c
    )
    target_include_directories(world_trace_abi_probe PRIVATE src)
    target_link_libraries(world_trace_abi_probe PRIVATE iginatives)
    add_test(NAME world_trace_batch_stub_abi COMMAND world_trace_abi_probe)

    add_executable(qtask_event_probe
        tests/qtask_event_probe.c
        src/004011D0-QTask_OnEvent.c
        src/gi_memory.c
    )
    target_include_directories(qtask_event_probe PRIVATE src)
    add_test(NAME qtask_event_table_clear COMMAND qtask_event_probe)

    add_executable(qtask_event_dispatch_probe
        tests/qtask_event_dispatch_probe.c
        src/00401400-QTask_RemoveEventCallback.c
        src/00401530-QTask_TriggerEvent.c
        src/004017C0-QTask_UnableToAllocateEven.c
        src/00401810-QTask_UnableToAllocateEven_2.c
        src/00401860-QTask_CleanupEvents.c
        src/00401A70-QTask_QtaskTypeSNotDefined.c
        src/00401B90-QTask_RegisterEventCallback_2.c
        src/gi_memory.c
    )
    target_include_directories(qtask_event_dispatch_probe PRIVATE src)
    add_test(NAME qtask_event_dispatch_table_and_recursion COMMAND qtask_event_dispatch_probe)

    add_executable(frames_get_probe
        tests/frames_get_probe.c
        src/00402870-Frames_Get.c
        src/gi_memory.c
    )
    target_include_directories(frames_get_probe PRIVATE src)
    add_test(NAME frames_get_guest_context_read COMMAND frames_get_probe)

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
