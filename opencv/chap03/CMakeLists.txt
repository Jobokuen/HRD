# CMake 최소 버전 요구 사항을 지정합니다.
cmake_minimum_required(VERSION 3.0)

# 프로젝트의 이름을 지정합니다.
project(basic)

# OpenCV 라이브러리를 찾습니다. REQUIRED 키워드는 OpenCV를 반드시 필요로 한다는 것을 나타냅니다.
find_package(OpenCV REQUIRED)

file(GLOB SOURCES "*.cpp")

foreach(SOURCE ${SOURCES})
    get_filename_component(EXE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXE_NAME} ${SOURCE})
    target_link_libraries(${EXE_NAME} ${OpenCV_LIBS})
    target_include_directories(${EXE_NAME} PUBLIC ${OpenCV_INCLUDE_DIRS})
endforeach()