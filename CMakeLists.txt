CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
PROJECT (HUMMER LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions")
SET(CMAKE_BUILD_TYPE "DEBUG")

# Give platform dll setting
ADD_DEFINITIONS(-DHM_PLATFORM_MAC -DHM_BUILD_DLL)

MESSAGE (STATUS "THIS IS BIRNARY DIR : " ${HUMMER_BINARY_DIR})
MESSAGE (STATUS "THIS IS SOURCE DIR : " ${HUMMER_SOURCE_DIR})

add_subdirectory(${HUMMER_SOURCE_DIR}/Hummer)

INCLUDE_DIRECTORIES(${HUMMER_SOURCE_DIR}/Hummer/src/)
INCLUDE_DIRECTORIES(${HUMMER_SOURCE_DIR}/Hummer/vendor/spdlog/include/)
INCLUDE_DIRECTORIES(${HUMMER_SOURCE_DIR}/Hummer/vendor/spdlog/include/)


# INCLUDE_DIRECTORIES(${HUMMER_SOURCE_DIR}/Hummer/src/Hummer/)

# SET (HUMMER_SRC Hummer/src/Hummer/Application.cpp)
# SET (SANDBOX_SRC Sandbox/src/SandboxApp.cpp Hummer/src/Hummer/Application.cpp)

SET (EXEC_SRC 
	Hummer/src/Hummer/Application.cpp
	Hummer/src/Hummer/Log.cpp
	Sandbox/src/SandboxApp.cpp
)
ADD_EXECUTABLE(Application ${EXEC_SRC} )
