cmake_minimum_required(VERSION 3.2)

project (DesignPattern C CXX)

SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules)

# use c++11
if(CMAKE_VERSION VERSION_LESS "3")
  add_definitions(-std=c++11)
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if (NOT PROJECT_BINARY_DIR)
	set(PROJECT_BINARY_DIR build)
endif()

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/run)
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/run)

if (NOT CMAKE_BUILD_TYPE) 
    set(CMAKE_BUILD_TYPE "Release")
endif()
message("Build Type " ${CMAKE_BUILD_TYPE})

include_directories(${PROJECT_SOURCE_DIR})

enable_testing()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
add_subdirectory(code)

add_subdirectory(Template)