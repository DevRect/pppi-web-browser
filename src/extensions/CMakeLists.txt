project(extensions LANGUAGES CXX)

add_library(extensions STATIC
    ExtensionManager.cpp
    ExtensionAPI.cpp
)

target_include_directories(extensions PUBLIC ${CMAKE_SOURCE_DIR}/include/extensions PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(extensions PRIVATE Qt5::Core)