project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для core
add_executable(tst_core tst_core.cpp)
target_link_libraries(tst_core PRIVATE core ui rendering tabs network history security extensions performance multimedia platform Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_core COMMAND tst_core)

# Указываем выходную директорию для тестов
set_target_properties(tst_core
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)