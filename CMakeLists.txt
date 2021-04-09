cmake_minimum_required(VERSION 3.0.0)
project(discord_bot VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_FILES src/**.cpp)
file(GLOB_RECURSE SOURCE_HEADERS src/**.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${SOURCE_HEADERS})

add_subdirectory(vendor/json)
add_subdirectory(vendor/sleepy-discord)

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json sleepy-discord)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
