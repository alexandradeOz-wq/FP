# Semana 09 - Memoria dinámica
# Detección de errores de memoria con ASan y Valgrind

# 1. COMPILADOR
CXX = g++

# 2. FLAGS BASE DE COMPILACION
# -g agrega informacion de debug (util para Asan)
BASE_FLAGS = -std=c++17 -Wall -Wextra -Wpedantic -g

# 3. ADDRESS SANITIZER
# detecta: accesos fuera de memoria, uso de punteros inválidos, uso después de free
SANFLAGS = -fsanitize=address

# 4. FLAGS ACTIVOS 
CXXFLAGS_NORMAL = $(BASE_FLAGS)
CXXFLAGS_ASAN = $(BASE_FLAGS) $(SANFLAGS)

# 5. VALGRIND
# detecta: memory leaks, memoria no inicializada, double free, errores de manejo del heap
VALGRIND = valgrind --leak-check=full \
                    --track-origins=yes \
                    --show-leak-kinds=all

# 6. DIRECTORIOS DE SALIDA
BUILD_NORMAL = build
BUILD_ASAN = buildasan
BUILD_VALGRIND  = buildvg


# 7. DETECTAR ARCHIVOS FUENTES
SOURCES = $(wildcard *.cpp)


# 8. GENERAR EJECUTABLES
TARGETS_NORMAL = $(patsubst %.cpp, $(BUILD_NORMAL)/%, $(SOURCES)) 
TARGETS_ASAN = $(patsubst %.cpp, $(BUILD_ASAN)/%, $(SOURCES)) #$(SOURCES:.cpp=)
TARGETS_VALGRIND  = $(patsubst %.cpp,$(BUILD_VALGRIND)/%,$(SOURCES))

# 9. BUILD NORMAL
# uso: make
all: $(TARGETS_NORMAL)

$(BUILD_NORMAL)/%: %.cpp
	mkdir -p $(BUILD_NORMAL)
	$(CXX) $(CXXFLAGS_NORMAL) $< -o $@



# 10. BUILD ASAN 
# uso: make asan
asan: $(TARGETS_ASAN)

$(BUILD_ASAN)/%: %.cpp
	mkdir -p $(BUILD_ASAN)
	$(CXX) $(CXXFLAGS_ASAN) $< -o $@

# 11 BUILD VALGRIND
# uso make vg
vg: $(TARGETS_VALGRIND)

$(BUILD_VALGRIND)/%: %.cpp
	mkdir -p $(BUILD_VALGRIND)
	$(CXX) $(CXXFLAGS_NORMAL) $< -o $@


# 12. EJECUTAR PROGRAMAS
# uso: make run-ejemplo1
run-%: $(BUILD_NORMAL)/%
	./$(BUILD_NORMAL)/$*

# uso: make run-asan-ejemplo1
run-asan-%: $(BUILD_ASAN)/%
	./$(BUILD_ASAN)/$*

# uso: make run-vg-ejemplo1
run-vg-%: $(BUILD_VALGRIND)/%
	$(VALGRIND) ./$(BUILD_VALGRIND)/$*
vg: $(TARGETS_VALGRIND)


# 13. EJECUTAR TODOS LOS PROGRAMAS
# Verificar que todo este compilado (all)
run-all-normal:
	@for exe in $(TARGETS_NORMAL); do \
		./$$exe; \
	done

run-all-asan:
	@for exe in $(TARGETS_ASAN); do \
		./$$exe; \
	done

run-all-vg:
	@for exe in $(TARGETS_VALGRIND); do \
		$(VALGRIND) ./$$exe; \
	done

# 14. LIMPIEZA
clean:
	rm -rf $(BUILD_NORMAL) $(BUILD_ASAN) $(BUILD_VALGRIND)

# 15. PHONY
.PHONY: all asan vg clean 

# RESUMEN DE COMANDOS 
# MODO NORMAL
# compilar: make
# Ejecutar: make run-ejemplo1

# MODO ASAN
# Compilar: make asan
# Ejecutar: make run-asan-ejemplo1 

# MODO VALGRIND
# Compilar: make vg
# Ejecutar: make run-vg-ejemplo1

# LIMPIAR TODO
# make clean