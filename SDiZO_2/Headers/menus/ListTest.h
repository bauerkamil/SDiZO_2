#pragma once
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "../ListGraph.h"
#include "../Edge.h"
#include "../algorithms/Kruskal.h"
#include "../algorithms/Prim.h"
#include "../utils/FillGraph.h"

class ListTest
{
public:
	ListTest(FillGraph* fillGraph, Graphs::Kruskal* kruskalAlg, Graphs::Prim* primAlg);
	~ListTest();
	void run();
private:
	Graphs::ListGraph* testGraph = new Graphs::ListGraph(false);
	Graphs::Kruskal* kruskalAlg;
	Graphs::Prim* primAlg;
	FillGraph* fillGraph;
	const int FILL_WIDTH = 100;
	bool isFinished = false;

	void printOptions();
	int getOption();
	std::string getFileName();
	void chooseOption(int option);
};
