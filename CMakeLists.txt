cmake_minimum_required(VERSION 3.10)
project(dashboard_SFML)

add_subdirectory(deps/SFML-3.1.0)
add_executable(dashboard_SFML src/main.cpp)

target_compile_features(dashboard_SFML PRIVATE cxx_std_17)
target_link_libraries(dashboard_SFML PRIVATE SFML::Graphics)

add_custom_command(TARGET dashboard_SFML POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/resources
            $<TARGET_FILE_DIR:dashboard_SFML>/resources
)
