# CMake 최소 버전 요구 사항을 지정합니다.
cmake_minimum_required(VERSION 3.0)

# 프로젝트의 이름을 지정합니다.
project(HelloWorld)

# OpenCV 라이브러리를 찾습니다. REQUIRED 키워드는 OpenCV를 반드시 필요로 한다는 것을 나타냅니다.
find_package(OpenCV REQUIRED)

# 실행 파일을 생성하는데 필요한 소스 파일을 추가합니다.
add_executable(helloworld 01_helloworld.cpp)

# 실행 파일에 OpenCV 라이브러리를 링크합니다. 
# $(OpenCV_LIBS)는 OpenCV 라이브러리들의 리스트를 나타냅니다.
target_link_libraries(helloworld ${OpenCV_LIBS})

# 실행 파일에 OpenCV 라이브러리의 헤더 파일 디렉토리를 포함시킵니다.
# ${OpenCV_INCLUDE_DIRS} 는 OpenCV 헤더 파일들의 디렉토리를 나타냅니다.
target_include_directories(helloworld PUBLIC ${OpenCV_INCLUDE_DIRS})