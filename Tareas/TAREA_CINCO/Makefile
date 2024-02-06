# Configuración del proyecto
SRC_DIR = src
TARGET1 = $(SRC_DIR)/Practica1_main.py
TARGET2 = $(SRC_DIR)/Practica2_Calificaciones.py

# Detectar sistema operativo en MSYS2
ifeq ($(MSYSTEM),MINGW64)
    PYTHON = python
else
    PYTHON = py
endif

# Reglas por defecto
all: run

# Regla para ejecutar el programa 1
run1:
	$(PYTHON) $(TARGET1)

# Regla para ejecutar el programa 2
run2:
	$(PYTHON) $(TARGET2)

# Regla para ejecutar ambos programas
run: run1 run2
