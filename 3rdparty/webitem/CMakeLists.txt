PROJECT(PlexyDesk)
INCLUDE(CPack)
FIND_PACKAGE(Qt4 REQUIRED)
cmake_minimum_required(VERSION 2.6)
SET(LIB_MAJOR 0)
SET(LIB_MINOR 1)
SET(LIB_RELEASE SVNBUILD)
SET(LIB_SUB_RELEASE 1)

cmake_policy(SET CMP0003 NEW)

#ADD_DEFINITIONS (${QT_DEFINITIONS})

SET(APPLICATION_NAME "${PROJECT_NAME}")
SET(APPLICATION_MAIN_VERSION "0.${LIB_MAJOR}.${LIB_MINOR}.${LIB_RELEASE}")


INCLUDE_DIRECTORIES(
    ${CMAKE_BINARY_DIR}
    ${CMAKE_BINARY_DIR}/lib
    ${CMAKE_BINARY_DIR}/src
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/lib
    ${CMAKE_SOURCE_DIR}/src
    ${QT_INCLUDE_DIR}
)


add_subdirectory(lib)
#add_subdirectory(src)
