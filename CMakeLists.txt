cmake_minimum_required(VERSION 3.14)

project(igbubble LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
#find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)


set(sources	
	main.cpp)

set(headers
    ../libs/igbenchmark/igbenchmark.h)

add_executable(igbubble ${sources} ${headers})

target_include_directories(igbubble
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../libs/igbenchmark>
)


target_link_libraries(igbubble 
 #   LINK_PUBLIC Qt${QT_VERSION_MAJOR}::Core
    LINK_PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../libs/igbenchmark/binary/release/igbenchmark.lib
)




