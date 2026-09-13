cmake_minimum_required(VERSION 3.10)
project(sqrt)

set(CMAKE_CXX_STANDARD 11)

# Основний проект - sqrt з root.cpp і main.cpp
add_executable(sqrt main.cpp root.cpp)

# Програма для друку імені
add_executable(print_name print_name.cpp)

# Програма для розрахунку віку
add_executable(age_calculator age_calculator.cpp)

target_link_libraries(sqrt m)
target_link_libraries(age_calculator m)