project(platform LANGUAGES CXX)

add_library(platform STATIC
    PlatformAdapter.cpp
    TouchHandler.cpp
)

target_include_directories(platform PUBLIC ${CMAKE_SOURCE_DIR}/include/platform PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(platform PRIVATE Qt5::Widgets Qt5::Core)