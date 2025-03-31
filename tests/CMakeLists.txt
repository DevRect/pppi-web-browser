project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для platform
add_executable(tst_platform tst_platform.cpp)
target_link_libraries(tst_platform PRIVATE platform Qt5::Test Qt5::Widgets Qt5::Core)
add_test(NAME tst_platform COMMAND tst_platform)

# Указываем выходную директорию для тестов
set_target_properties(tst_platform
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)