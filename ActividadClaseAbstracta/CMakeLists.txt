cmake_minimum_required(VERSION 3.21)
project(ActividadClaseAbstracta)

set(CMAKE_CXX_STANDARD 14)

add_executable(ActividadClaseAbstracta main.cpp Profesion.h Medico.h Medico.cpp Ingeniero.h Ingeniero.cpp Profesor.cpp Profesor.h Directorio.cpp Directorio.h)
