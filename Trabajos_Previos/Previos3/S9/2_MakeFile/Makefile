# Nombre del ejecutable
TARGET = gestion_biblioteca.exe

#Objetico predeterminado
all: $(TARGET)

# Compilador de C++
CXX = g++

# Opciones de compilación 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = libro.cpp biblioteca.cpp main.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET):$(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados 
.PHONY: clean #.PHONY le hace saber al make que no existe un archivo con dicho nombre.
clean:
	del $(TARGET) $(OBJECTS)