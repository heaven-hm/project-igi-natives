add_library(igi_gameplay STATIC
    src/human_locomotion_graph.cpp
)
target_include_directories(igi_gameplay PUBLIC include)
target_compile_features(igi_gameplay PUBLIC cxx_std_20)
set_target_properties(igi_gameplay PROPERTIES CXX_EXTENSIONS OFF)
