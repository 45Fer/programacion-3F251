PROYECTO :=programa
LIB :=-lftxui-screen -lftxui-dom -lftxui-component
CXX := c++
INCLUDE := -Iinclude
EXE := bin/$(PROYECTO)

$(EXE) : src/main.cpp
	$(CXX) $< -o $@ $(LIB) $(INCLUDE) -std=c++17

run : $(EXE)
	./$<

memoria : bin/memoria
	./$<

archivos : bin/archivos
	./$<

pokedex : bin/pokedex
	./$<

bin/memoria : src/memoria.cpp
	$(CXX) $< -o $@ -std=c++17

bin/archivos : src/archivos.cpp
	$(CXX) $< -o $@ -std=c++17

bin/pokedex : src/pokedex.cpp
	$(CXX) $< -o $@ -std=c++17