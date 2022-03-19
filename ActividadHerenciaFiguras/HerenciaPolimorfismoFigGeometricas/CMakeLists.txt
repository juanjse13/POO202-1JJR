cmake_minimum_required(VERSION 3.19)
project(HerenciaPolimorfismoFigGeometricas)

set(CMAKE_CXX_STANDARD 14)

add_executable(HerenciaPolimorfismoFigGeometricas main.cpp FiguraGeometrica.cpp FiguraGeometrica.h Circulo.cpp Circulo.h Cuadrado.cpp Cuadrado.h Rectangulo.cpp Rectangulo.h DirectorioFG.cpp DirectorioFG.h)