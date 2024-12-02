cmake_minimum_required(VERSION 3.10)

project(Tortita)

set(CREATE_TESTS 1)

set(TORTITA_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(src/Tortita/CMakeLists.txt)

if(DEFINED CREATE_TESTS) 
    include(src/test/CMakeLists.txt)
endif()