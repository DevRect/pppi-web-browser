project(performance LANGUAGES CXX)

add_library(performance STATIC
    PerformanceOptimizer.cpp
    ThreadPool.cpp
)

target_include_directories(performance PUBLIC ${CMAKE_SOURCE_DIR}/include/performance PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(performance PRIVATE Qt5::Core)