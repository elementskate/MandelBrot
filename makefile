all:
	g++ -std=c++11 -pthread main.cpp pixel.cpp stdFunctions.cpp ImageProperties.cpp -o main 