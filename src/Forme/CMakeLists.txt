cmake_minimum_required(VERSION 3.24)
project(Forme)

set(CMAKE_CXX_STANDARD 23)

add_executable(Forme Forme.cpp Forme2D.cpp Forme3D.cpp Carre.cpp Cube.cpp Cercle.cpp Rectangle.cpp main.cpp)
