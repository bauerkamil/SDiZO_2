#pragma once
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "../MatrixGraph.h"
#include "../algorithms/Kruskal.h"
#include "../algorithms/Prim.h"
#include "../algorithms/Dijkstra.h"
#include "../algorithms/BellmanFord.h"
#include "../utils/FillGraph.h"

class MatrixTest
{
public:
	MatrixTest(FillGraph* fileGraph, Graphs::Kruskal* kruskalAlg, Graphs::Prim* primAlg, Graphs::Dijkstra* dijkstraAlg, Graphs::BellmanFord* bfAlg);
	~MatrixTest();
	void run();
private:
	Graphs::MatrixGraph* testGraph = new Graphs::MatrixGraph(false);
	Graphs::Kruskal* kruskalAlg;
	Graphs::Prim* primAlg;
	Graphs::Dijkstra* dijkstraAlg;
	Graphs::BellmanFord* bfAlg;
	FillGraph* fillGraph;
	const int FILL_WIDTH = 100;
	bool isFinished = false;

	void printOptions();
	int getOption();
	std::string getFileName();
	size_t getVertexNum();
	size_t getVertex();
	size_t getDensity();
	bool getDirectory();
	void chooseOption(int option);
};
