project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для multimedia
add_executable(tst_multimedia tst_multimedia.cpp)
target_link_libraries(tst_multimedia PRIVATE multimedia Qt5::Test Qt5::Multimedia Qt5::Widgets Qt5::Core)
add_test(NAME tst_multimedia COMMAND tst_multimedia)

# Указываем выходную директорию для тестов
set_target_properties(tst_multimedia
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)