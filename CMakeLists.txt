cmake_minimum_required(VERSION 3.20)
project(AssistantMaker)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${AssistantMaker_SOURCE_DIR}/bin)
set(CMAKE_BUILD_TYPE Debug)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)
find_package(OpenCV REQUIRED)

include_directories(${GTK4_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})

add_definitions(${GTK4_CFLAGS_OTHER})

add_subdirectory(src)

target_link_libraries(AssistantMaker ${OpenCV_LIBS})
target_link_libraries(AssistantMaker ${GTK4_LIBRARIES})
