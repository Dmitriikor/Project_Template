cmake_minimum_required(VERSION 3.28.0)
project(Project_Template VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_COMPILER g++)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# Указываем пути к заголовочным файлам
include_directories(
    ${CMAKE_SOURCE_DIR}/include  # Путь к папке с заголовочными файлами
)

# Указываем пути к файлам исходного кода
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/SRC/*.cpp)

# Добавляем исполняемый файл или библиотеку
add_executable(main ${SOURCES})  # Замените MyExecutable на желаемое название исполняемого файла

# Указываем аргументы компилятора для g++ / gcc на Windows

target_compile_options(main PRIVATE
 -std=c++23
 -fdiagnostics-color=always
 -Wall
 -Wextra
 -Wpedantic
 -fsanitize-address-use-after-scope
 -fexceptions
 -fms-extensions
 -fvisibility=hidden
 -fPIC
 -O0
 -g
 
)
