
add_executable(Demo1 ${CMAKE_CURRENT_LIST_DIR}/Demo1.cpp)

target_include_directories(Demo1 PUBLIC ${TORTITA_INCLUDE})
target_link_libraries(Demo1 Tortita)

add_executable(Demo2 ${CMAKE_CURRENT_LIST_DIR}/Demo2.cpp)

target_include_directories(Demo2 PUBLIC ${TORTITA_INCLUDE})
target_link_libraries(Demo2 Tortita)