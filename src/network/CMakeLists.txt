project(network LANGUAGES CXX)

add_library(network STATIC
    NetworkManager.cpp
    DownloadManager.cpp
)

target_include_directories(network PUBLIC ${CMAKE_SOURCE_DIR}/include/network PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(network PRIVATE Qt5::Network Qt5::Core)