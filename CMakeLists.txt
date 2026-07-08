cmake_minimum_required(VERSION 3.22)
project(PathfindingVisualizer VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Tu ruta real a SFML
set(SFML_DIR "C:/Users/damag/OneDrive/Desktop/SFML/lib/cmake/SFML")

# ¡LA SOLUCIÓN: Primera letra en Mayúscula!
find_package(SFML 3 COMPONENTS Graphics Window System REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics)