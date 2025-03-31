project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для rendering
add_executable(tst_rendering tst_rendering.cpp)
target_link_libraries(tst_rendering PRIVATE rendering Qt5::Test Qt5::WebEngineWidgets Qt5::Core)
add_test(NAME tst_rendering COMMAND tst_rendering)

# Указываем выходную директорию для тестов
set_target_properties(tst_rendering
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)