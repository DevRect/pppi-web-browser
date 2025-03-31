project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для security
add_executable(tst_security tst_security.cpp)
target_link_libraries(tst_security PRIVATE security Qt5::Test Qt5::Network Qt5::Core)
add_test(NAME tst_security COMMAND tst_security)

# Указываем выходную директорию для тестов
set_target_properties(tst_security
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)