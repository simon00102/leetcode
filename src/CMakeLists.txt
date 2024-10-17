add_executable(test2 test2.cpp ./p1/add.cpp)
target_include_directories(test2 PRIVATE .)
target_link_libraries(test2 PRIVATE p2)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE fmt::fmt p2)

add_subdirectory(p2)