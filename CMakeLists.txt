cmake_minimum_required(VERSION 3.28.0)
project(Project_Template VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_COMPILER g++)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# ��������� ���� � ������������ ������
include_directories(
    ${CMAKE_SOURCE_DIR}/include  
    C:/boost_build/lib
    C:/boost_build/include
    C:/boost_build/include/boost-1_85
)

# ��������� ���� � �����������
link_directories(
    C:/boost_build/lib
)

# ��������� ���� � ������ ��������� ����
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/SRC/*.cpp)

# ��������� ����������� ���� ��� ����������
add_executable(main ${SOURCES})  

# ��������� ��������� ����������� ��� g++ / gcc �� Windows
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


# ����� ��������� � ��������� �����
file(GLOB BOOST_LIBRARIES "C:/boost_build/lib/libboost_*.dll" "C:/boost_build/lib/libboost_*.a")

# ���� ��� ���������� ��������� ���������
foreach(BOOST_LIB ${BOOST_LIBRARIES})
    target_link_libraries(main PRIVATE ${BOOST_LIB})
endforeach()