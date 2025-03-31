project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для extensions
add_executable(tst_extensions tst_extensions.cpp)
target_link_libraries(tst_extensions PRIVATE extensions Qt5::Test Qt5::Core)
add_test(NAME tst_extensions COMMAND tst_extensions)

# Указываем выходную директорию для тестов
set_target_properties(tst_extensions
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)