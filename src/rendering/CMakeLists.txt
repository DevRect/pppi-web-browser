project(rendering LANGUAGES CXX)

add_library(rendering STATIC
    WebRenderer.cpp
    HtmlParser.cpp
)

target_include_directories(rendering PUBLIC ${CMAKE_SOURCE_DIR}/include/rendering PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(rendering PRIVATE Qt5::WebEngineWidgets Qt5::Core)