cmake_minimum_required (VERSION 3.5)

project (demo)

set (SRC_LIST ${PROJECT_SOURCE_DIR}/func1/func1.cpp)

add_library (testFunc_shared SHARED ${SRC_LIST})
add_library (testFunc_static STATIC ${SRC_LIST})

set_target_properties (testFunc_shared PROPERTIES OUTPUT_NAME "test")
set_target_properties (testFunc_static PROPERTIES OUTPUT_NAME "test")

set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
