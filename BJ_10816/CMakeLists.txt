# CMakeList.txt: SWEA_24615에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required(VERSION 3.10)

# 지원되는 경우 MSVC 컴파일러에 대해 핫 다시 로드 사용하도록 설정합니다.
if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif ()

project(BJ_10816)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # 지정한 버전을 반드시 지원해야 함
set(CMAKE_CXX_EXTENSIONS OFF)        # 컴파일러 고유 확장 문법 사용 금지

# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_executable(BJ_10816 "main.cpp")

if (MSVC)
    add_compile_options(
            /permissive-   # C++ 규격 엄격 적용 (하위 버전 규격 위반/상위 문법 엄격 감지)
            /W4            # 경고 수준 Level 4
            # /WX          # 필요 시 경고를 에러로 처리
    )
endif ()

# input.txt 파일이 소스 디렉터리에 실제로 존재할 때만 복사 실행
if (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/input.txt")
    configure_file(
            "${CMAKE_CURRENT_SOURCE_DIR}/input.txt"
            "${CMAKE_CURRENT_BINARY_DIR}/input.txt"
            COPYONLY
    )
endif ()