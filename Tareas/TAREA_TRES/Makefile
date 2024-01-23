# Nombre del ejecutable
TARGET1 = matrices.exe
TARGET2 = expresiones_regulares.exe

# Compilador de C++
CXX = g++

# Opciones de compilación 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Compila y ejecuta
all: programa1 programa2

# Regla para compilar el programa 1
programa1: Matriz_practica1.hpp funciones.cpp main_practica1.cpp OperacionesBasicas_practica1.hpp Impresion_practica1.hpp
	$(CXX) $(CXXFLAGS) funciones.cpp main_practica1.cpp -o $(TARGET1)

# Ejecuta el programa 1
run1: programa1
	./$(TARGET1)

# Regla para compilar el programa 2
programa2: main_practica2.cpp Expresiones_practica2.cpp
	$(CXX) $(CXXFLAGS) main_practica2.cpp Expresiones_practica2.cpp -o $(TARGET2)

# Ejecuta el programa 2
run2: programa2
	./$(TARGET2)

# Regla para limpiar los archivos generados 
.PHONY: clean
clean:
	del $(TARGET1)
	del $(TARGET2)