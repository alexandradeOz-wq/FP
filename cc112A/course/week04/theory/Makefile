# Compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic

# Carpeta de salida
BUILD_DIR = build

# Archivos fuente
SOURCES = $(wildcard *.cpp)

# Ejecutables (mismo nombre pero dentro de build/)
TARGETS = $(patsubst %.cpp,$(BUILD_DIR)/%,$(SOURCES))

# Regla principal
all: $(BUILD_DIR) $(TARGETS)

# Crear carpeta build si no existe
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Regla de compilación
$(BUILD_DIR)/%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@


# run-%: $(BUILD_DIR)/%
# 	./$(BUILD_DIR)/$*


# Limpiar ejecutables
clean:
	rm -rf $(BUILD_DIR)

# Para evitar conflictos con nombres
.PHONY: all clean


# make        -> para compilar

# ./ejecutable  -> para ejecutar