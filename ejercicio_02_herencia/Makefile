# -----------------------
# Compilador
# -----------------------
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I .

# -----------------------
# Directorios
# -----------------------
BIN_DIR = bin
SRC_DIR = libempleado

# -----------------------
# Fuentes
# -----------------------
SRCS = \
	$(SRC_DIR)/empleado.cpp \
	$(SRC_DIR)/empleado_tiempo_completo.cpp \
	$(SRC_DIR)/main_empleado.cpp

# -----------------------
# Objetos
# -----------------------
OBJS = $(SRCS:.cpp=.o)

# -----------------------
# Ejecutable
# -----------------------
OUTPUT = $(BIN_DIR)/empleado

# -----------------------
# Objetivos ficticios (PHONY)
# -----------------------
# 'all' y 'clean' no son archivos reales, 
# así que los marcamos como PHONY para que make
# siempre ejecute sus recetas aunque existan archivos con esos nombres.
.PHONY: all clean

# -----------------------
# Objetivo por defecto
# -----------------------
all: $(BIN_DIR) $(OUTPUT)

# -----------------------
# Crear carpeta bin
# -----------------------
# El '-p' evita error si la carpeta ya existe.
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# -----------------------
# Linkeo
# -----------------------
$(OUTPUT): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# -----------------------
# Compilación de objetos
# -----------------------
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# -----------------------
# Limpieza de archivos generados
# -----------------------
clean:
	rm -f $(OBJS) $(OUTPUT)
	-rm -rf $(BIN_DIR)