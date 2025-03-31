project(tests LANGUAGES CXX)

# Находим Qt Test
find_package(Qt5 COMPONENTS Test REQUIRED)

# Включаем тестирование
enable_testing()

# Тест для network
add_executable(tst_network tst_network.cpp)
target_link_libraries(tst_network PRIVATE network Qt5::Test Qt5::Network Qt5::Core)
add_test(NAME tst_network COMMAND tst_network)

# Указываем выходную директорию для тестов
set_target_properties(tst_performance
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/tests
)