

add_library(Tortita)

target_include_directories(Tortita PUBLIC ${TORTITA_INCLUDE})
target_sources(Tortita PUBLIC ${CMAKE_CURRENT_LIST_DIR}/util/Vec3.cpp)