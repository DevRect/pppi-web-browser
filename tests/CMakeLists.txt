project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для core
add_executable(tst_core tst_core.cpp)
target_link_libraries(tst_core PRIVATE core ui rendering tabs network history security extensions performance multimedia platform Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_core COMMAND tst_core)

# Тест для ui
add_executable(tst_ui tst_ui.cpp)
target_link_libraries(tst_ui PRIVATE ui Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_ui COMMAND tst_ui)

# Тест для rendering
add_executable(tst_rendering tst_rendering.cpp)
target_link_libraries(tst_rendering PRIVATE rendering Qt5::Test Qt5::WebEngineWidgets Qt5::Core)
add_test(NAME tst_rendering COMMAND tst_rendering)

# Тест для tabs
add_executable(tst_tabs tst_tabs.cpp)
target_link_libraries(tst_tabs PRIVATE tabs Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_tabs COMMAND tst_tabs)

# Тест для network
add_executable(tst_network tst_network.cpp)
target_link_libraries(tst_network PRIVATE network Qt5::Test Qt5::Network Qt5::Core)
add_test(NAME tst_network COMMAND tst_network)

# Тест для history
add_executable(tst_history tst_history.cpp)
target_link_libraries(tst_history PRIVATE history Qt5::Test Qt5::Core)
add_test(NAME tst_history COMMAND tst_history)

# Указываем выходную директорию для тестов
set_target_properties(tst_core tst_ui tst_rendering tst_tabs tst_performance tst_history
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)