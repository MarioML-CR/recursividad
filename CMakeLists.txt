cmake_minimum_required(VERSION 3.17)
project(recursividad)

set(CMAKE_CXX_STANDARD 20)

add_executable(recursividad src/ui/main.cpp src/utilitario/Validar.cpp src/utilitario/Validar.h src/tl/Gestor.cpp src/tl/Gestor.h)