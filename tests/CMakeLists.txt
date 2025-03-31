project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для tabs
add_executable(tst_tabs tst_tabs.cpp)
target_link_libraries(tst_tabs PRIVATE tabs Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_tabs COMMAND tst_tabs)

# Указываем выходную директорию для тестов
set_target_properties(tst_tabs
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)