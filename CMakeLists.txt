cmake_minimum_required(VERSION 3.20)
project(AssistantMaker)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${AssistantMaker_SOURCE_DIR}/bin)
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenCV REQUIRED)
find_package(wxWidgets REQUIRED)

include(${wxWidgets_USE_FILE})
include_directories(${OpenCV_INCLUDE_DIRS})


add_subdirectory(src)


target_link_libraries(AssistantMaker ${OpenCV_LIBS})
target_link_libraries(AssistantMaker ${wxWidgets_LIBRARIES})


