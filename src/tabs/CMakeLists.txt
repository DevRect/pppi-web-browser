project(tabs LANGUAGES CXX)

add_library(tabs STATIC
    TabManager.cpp
    TabGroup.cpp
)

target_include_directories(tabs PUBLIC ${CMAKE_SOURCE_DIR}/include/tabs PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(tabs PRIVATE Qt5::Widgets Qt5::Core)