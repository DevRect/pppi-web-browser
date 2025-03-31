project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для history
add_executable(tst_history tst_history.cpp)
target_link_libraries(tst_history PRIVATE history Qt5::Test Qt5::Core)
add_test(NAME tst_history COMMAND tst_history)

# Указываем выходную директорию для тестов
set_target_properties(tst_history
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)