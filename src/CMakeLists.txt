set (list 
    LogET.cpp
)

add_library(LogET ${list})
target_include_directories(LogET PUBLIC ${CMAKE_SOURCE_DIR}/include)
