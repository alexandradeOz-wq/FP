# CONFIGURACIÓN GENERAL
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

# Nombre del ejecutable
TARGET = app

# Carpetas
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build


# ARCHIVOS
# Todos los .cpp dentro de src/
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Objetos en build/
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))


# REGLA PRINCIPAL
all: $(TARGET)

# Linkeo final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


# COMPILACIÓN OBJETOS
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@


# EJECUCIÓN
run: $(TARGET)
	./$(TARGET)


# LIMPIEZA
clean:
	rm -rf $(BUILD_DIR) $(TARGET)


# REBUILD COMPLETO
rebuild: clean all