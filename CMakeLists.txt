cmake_minimum_required(VERSION 3.0)

project(mySql4cpp)

include_directories(include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(src SRC_LIST)

find_library(Mysql mysqlclient)
add_compile_options(-Wall -g)

add_executable(test ${SRC_LIST})

target_link_libraries(test ${Mysql})
