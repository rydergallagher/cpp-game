.PHONY: run

compile:
	g++ main.cpp GameFlow.cpp World.cpp Character.cpp -o run

run: compile
	./run

