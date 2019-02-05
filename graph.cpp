#include "graph.h"

Graph::CreateGraph(int &v, int &e)
{
	Graph* graph = new Graph(v, e);
}

Graph::Graph()
{
	graph->verticies = 0;
	graph->edges = 0;
	Edge * edge = new Edge[edges];
}

Graph::Graph(int v, int e)
{
	this->verticies = v;
	this->edge = e;
}

Graph::~Graph()
{
	delete edge;
}
