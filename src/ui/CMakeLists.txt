project(ui LANGUAGES CXX)

add_library(ui STATIC
    BrowserUI.cpp
    AddressBar.cpp
    ToolBar.cpp
)

target_include_directories(ui PUBLIC ${CMAKE_SOURCE_DIR}/include/ui PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ui PRIVATE Qt5::Widgets Qt5::Core)