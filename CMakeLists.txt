cmake_minimum_required(VERSION 3.22)
project(PathfindingVisualizer VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SFML_DIR "C:/Users/damag/OneDrive/Desktop/SFML/lib/cmake/SFML")

find_package(SFML 3 COMPONENTS Graphics Window System REQUIRED)

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Grid.cpp
    src/Application.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics)