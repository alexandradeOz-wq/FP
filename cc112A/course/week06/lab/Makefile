# Semana 05 - Punteros
# Enfoque: Detectar errores de memoria con ASan

# 1. COMPILADOR
CXX = g++

# 2. FLAGS BASE DE COMPILACION
# -g agregar informacion de debug (util para Asan)
BASE_FLAGS = -std=c++17 -Wall -Wextra -g

# 3. ADDRESS SANITIZER
# detecta: accesos fuera de memoria
# uso de punteros inválidos
SANFLAGS = -fsanitize=address

# 4. FLAGS ACTIVOS 
CXXFLAGS_NORMAL = $(BASE_FLAGS)
CXXFLAGS_ASAN = $(BASE_FLAGS) $(SANFLAGS)

# 5. DIRECTORIOS DE SALIDA
BUILD_NORMAL = build
BUILD_ASAN = buildasan

# 6. DETECTAR ARCHIVOS FUENTES
SOURCES = $(wildcard *.cpp)


# 7. GENERAR EJECUTABLES EN build/, buildasan
TARGETS_NORMAL = $(patsubst %.cpp, $(BUILD_NORMAL)/%, $(SOURCES)) 
TARGETS_ASAN = $(patsubst %.cpp, $(BUILD_ASAN)/%, $(SOURCES)) #$(SOURCES:.cpp=)

# 8. REGLA PRINCIPAL
# normal build: make
all: $(TARGETS_NORMAL)

$(BUILD_NORMAL)/%: %.cpp
	mkdir -p $(BUILD_NORMAL)
	$(CXX) $(CXXFLAGS_NORMAL) $< -o $@



# 9. OTRAS REGLAS  DE COMPILACION
# asan build: make asan
asan: $(TARGETS_ASAN)

$(BUILD_ASAN)/%: %.cpp
	mkdir -p $(BUILD_ASAN)
	$(CXX) $(CXXFLAGS_ASAN) $< -o $@

####


# 10. EJECUTAR UN PROGRAMA 
# uso: make run-ejemplo1
run-%: $(BUILD_NORMAL)/%
	./$(BUILD_NORMAL)/$*

# uso: make run-asan-ejemplo1
run-asan-%: $(BUILD_ASAN)/%
	./$(BUILD_ASAN)/$*
 

###

# 11. EJECUTAR TODOS LOS PROGRAMAS (opcional)
# Verificar que todo este compilado (all)
run-all-normal:
	@for exe in $(TARGETS_NORMAL); do \
		./$$exe; \
	done

run-all-asan:
	@for exe in $(TARGETS_ASAN); do \
		./$$exe; \
	done



# 12. LIMPIEZA
clean:
	rm -rf $(BUILD_NORMAL) $(BUILD_ASAN)

# 13. PHONY
.PHONY: all asan clean 

# COMANDOS 
# Compilar en modo normal
# compilar: make
# Ejecutar: make run-ejemplo1

# Para Asan
# Compilar make asan
# Ejecutar: make run-asan-ejemplo1 