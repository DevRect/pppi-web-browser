project(security LANGUAGES CXX)

add_library(security STATIC
    SecurityManager.cpp
    CookieManager.cpp
)

target_include_directories(security PUBLIC ${CMAKE_SOURCE_DIR}/include/security PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(security PRIVATE Qt5::Network Qt5::Core)