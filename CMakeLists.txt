cmake_minimum_required(VERSION 3.16)
project(BrowserProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Находим Qt
find_package(Qt5 COMPONENTS Core Gui Widgets WebEngineWidgets Multimedia Network REQUIRED)

# Добавляем все подмодули
add_subdirectory(src/ui)
add_subdirectory(src/rendering)
add_subdirectory(src/tabs)
add_subdirectory(src/network)
add_subdirectory(src/history)
add_subdirectory(src/security)
add_subdirectory(src/extensions)
add_subdirectory(src/performance)
add_subdirectory(src/multimedia)
add_subdirectory(src/platform)
add_subdirectory(src/core)

# Указываем выходную директорию
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
