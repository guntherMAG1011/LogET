add_executable(testConsole testConsole.cpp)

target_link_libraries(testConsole PRIVATE LogET)
target_include_directories(testConsole PRIVATE ${CMAKE_SOURCE_DIR}/include)
