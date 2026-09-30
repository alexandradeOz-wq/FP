
# COMPILADOR + FLAGS
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

TARGET = app


# DETECCIÓN AUTOMÁTICA: 
# Toma automáticamente todos los .cpp del proyecto
SRCS = $(wildcard *.cpp)

# Convierte .cpp  .o
OBJS = $(SRCS:.cpp=.o)


# REGLAS PRINCIPALES

all: $(TARGET)

# Linkeo final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compilación genérica
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


# EJECUCIÓN
run: $(TARGET)
	./$(TARGET)


# LIMPIEZA


clean:
	rm -f $(OBJS) $(TARGET)


# RECOMPILACIÓN COMPLETA
rebuild: clean all

# USO
# make          compila
# make run      compila si hace falta y ejecuta
# make clean    borra .o y ejecutable
# make rebuild  recompila todo desde cero