# Nombre del ejecutable
TARGET = biblioteca.exe

# Compilador de C++
CXX = g++

# Opciones de compilación 
CXXFLAGS = -Wall -std=c++11

# Carpeta de archivos fuente
SRCDIR = src

# Lista de archivos fuente
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compila y ejecuta
all: build run

# Regla para compilar el programa a partir de los archivos objeto
build: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Ejecuta adivina.exe
run: build
	./$(TARGET)


# Regla para limpiar los archivos generados 
.PHONY: clean
clean:
	del $(TARGET)
	del $(SRCDIR)\*.exe