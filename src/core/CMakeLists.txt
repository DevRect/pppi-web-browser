project(core LANGUAGES CXX)

add_executable(Browser
    BrowserCore.cpp
    main.cpp
)

target_include_directories(Browser PUBLIC ${CMAKE_SOURCE_DIR}/include/core PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Browser PRIVATE
    ui
    rendering
    tabs
    network
    history
    security
    extensions
    performance
    multimedia
    platform
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::WebEngineWidgets
    Qt5::Multimedia
    Qt5::Network
)
