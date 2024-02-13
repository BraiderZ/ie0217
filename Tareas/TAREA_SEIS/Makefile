# Configuración del proyecto
PACKAGE_NAME = cars_analysis
TARGET = $(PACKAGE_NAME).__main__

# Detectar sistema operativo en MSYS2
ifeq ($(MSYSTEM),MINGW64)
    PYTHON = python
else
    PYTHON = py
endif

# Reglas por defecto
all: run

# Regla para ejecutar el programa
run:
	$(PYTHON) -m $(PACKAGE_NAME)