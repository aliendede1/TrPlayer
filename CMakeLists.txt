cmake_minimum_required(VERSION 3.10)
project(TrPlayer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Encontrar SFML
find_package(SFML 2.5 COMPONENTS audio system REQUIRED)

# Criar biblioteca estática MusicLib
add_library(MusicLib STATIC
    libs/MusicLib/MusicLib.cpp
    libs/MusicLib/MusicLib.h
)

target_include_directories(MusicLib PUBLIC libs/MusicLib)

# Criar executável principal
add_executable(TrPlayer src/main.cpp)

# Linkar executável com biblioteca MusicLib e SFML
target_link_libraries(TrPlayer PRIVATE MusicLib sfml-audio sfml-system)

