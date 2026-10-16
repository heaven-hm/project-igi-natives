cmake_minimum_required(VERSION 3.20)

set(REQUIRED_REFERENCE_SHA256 "dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01")
set(REQUIRED_SCENARIOS
    movement_ground movement_jump movement_wall movement_building movement_crouch
    weapon_fire weapon_reload weapon_switch ai_patrol ai_navigation ai_combat
    animation_pose animation_hit_death attachments scripts models_textures graphics
)

if(NOT DEFINED PARITY_DIRECTORY OR NOT IS_DIRECTORY "${PARITY_DIRECTORY}")
    message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: supply IGI_RETAIL_PARITY_DIRECTORY with original-executable and matching port captures. Functional tests are not retail verification.")
endif()

foreach(SCENARIO IN LISTS REQUIRED_SCENARIOS)
    set(CAPTURE_DIRECTORY "${PARITY_DIRECTORY}/${SCENARIO}")
    foreach(REQUIRED_FILE IN ITEMS manifest.txt retail.trace port.trace input.replay rea-evidence.json)
        if(NOT EXISTS "${CAPTURE_DIRECTORY}/${REQUIRED_FILE}")
            message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO}/${REQUIRED_FILE} is missing")
        endif()
    endforeach()
    # Read data declarations; never execute a capture's manifest as CMake code.
    file(STRINGS "${CAPTURE_DIRECTORY}/manifest.txt" MANIFEST_LINES)
    foreach(KEY IN ITEMS reference_binary_sha256 reference_trace_sha256 port_trace_sha256 input_sha256 comparison scenario)
        unset(MANIFEST_${KEY})
    endforeach()
    foreach(LINE IN LISTS MANIFEST_LINES)
        if(LINE MATCHES "^([a-z0-9_]+)=([a-zA-Z0-9_.-]+)$")
            set(MANIFEST_${CMAKE_MATCH_1} "${CMAKE_MATCH_2}")
        endif()
    endforeach()
    if(NOT MANIFEST_reference_binary_sha256 STREQUAL REQUIRED_REFERENCE_SHA256 OR
       NOT MANIFEST_comparison STREQUAL "bit-exact" OR NOT MANIFEST_scenario STREQUAL SCENARIO)
        message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO} reference identity or comparison contract is invalid")
    endif()
    string(LENGTH "${MANIFEST_input_sha256}" INPUT_DIGEST_LENGTH)
    if(NOT INPUT_DIGEST_LENGTH EQUAL 64 OR NOT MANIFEST_input_sha256 MATCHES "^[0-9a-f]+$")
        message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO} has no input digest")
    endif()
    file(SHA256 "${CAPTURE_DIRECTORY}/retail.trace" REFERENCE_TRACE_SHA256)
    file(SHA256 "${CAPTURE_DIRECTORY}/port.trace" PORT_TRACE_SHA256)
    file(SHA256 "${CAPTURE_DIRECTORY}/input.replay" INPUT_SHA256)
    if(NOT REFERENCE_TRACE_SHA256 STREQUAL MANIFEST_reference_trace_sha256 OR
       NOT PORT_TRACE_SHA256 STREQUAL MANIFEST_port_trace_sha256 OR NOT INPUT_SHA256 STREQUAL MANIFEST_input_sha256)
        message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO} trace digest mismatch")
    endif()
    file(SIZE "${CAPTURE_DIRECTORY}/retail.trace" REFERENCE_TRACE_SIZE)
    if(REFERENCE_TRACE_SIZE LESS 32)
        message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO} reference trace is empty or incomplete")
    endif()
    file(READ "${CAPTURE_DIRECTORY}/rea-evidence.json" REA_EVIDENCE)
    string(JSON REA_REFERENCE_SHA256 ERROR_VARIABLE REA_JSON_ERROR GET "${REA_EVIDENCE}" subject digest sha256)
    string(JSON REA_EVIDENCE_ID ERROR_VARIABLE REA_ID_ERROR GET "${REA_EVIDENCE}" evidence_id)
    string(JSON REA_OPERATION ERROR_VARIABLE REA_OPERATION_ERROR GET "${REA_EVIDENCE}" operation)
    if(REA_JSON_ERROR OR REA_ID_ERROR OR REA_OPERATION_ERROR OR NOT REA_REFERENCE_SHA256 STREQUAL REQUIRED_REFERENCE_SHA256 OR
       NOT REA_EVIDENCE_ID MATCHES "^ev_[0-9a-f]+$" OR
       NOT REA_OPERATION MATCHES "^(observe_native_calls|trace_native_values|capture_process_scenario|correlate_static_and_runtime)$")
        message(FATAL_ERROR "RETAIL PARITY NOT VERIFIED: ${SCENARIO} has no matching REA evidence identity")
    endif()
    execute_process(COMMAND "${CMAKE_COMMAND}" -E compare_files
        "${CAPTURE_DIRECTORY}/retail.trace" "${CAPTURE_DIRECTORY}/port.trace" RESULT_VARIABLE DIFFERENT)
    if(NOT DIFFERENT EQUAL 0)
        message(FATAL_ERROR "RETAIL PARITY FAILED: ${SCENARIO} diverges from the original executable")
    endif()
endforeach()

message(STATUS "Required supplied capture pairs match byte for byte. This establishes the recorded scenarios only; independent capture provenance and coverage review remain required.")
