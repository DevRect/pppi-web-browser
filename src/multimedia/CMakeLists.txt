project(multimedia LANGUAGES CXX)

add_library(multimedia STATIC
    MediaPlayer.cpp
    MediaControls.cpp
)

target_include_directories(multimedia PUBLIC ${CMAKE_SOURCE_DIR}/include/multimedia PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(multimedia PRIVATE Qt5::Multimedia Qt5::Widgets Qt5::Core)