project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для performance
add_executable(tst_performance tst_performance.cpp)
target_link_libraries(tst_performance PRIVATE performance Qt5::Test Qt5::Core)
add_test(NAME tst_performance COMMAND tst_performance)

# Указываем выходную директорию для тестов
set_target_properties(tst_performance
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)