project(history LANGUAGES CXX)

add_library(history STATIC
    HistoryManager.cpp
    BookmarkManager.cpp
)

target_include_directories(history PUBLIC ${CMAKE_SOURCE_DIR}/include/history PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(history PRIVATE Qt5::Core)