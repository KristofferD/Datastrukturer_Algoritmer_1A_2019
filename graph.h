#ifndef GRAPH_H
#define GRAPH_H
#include "edge.h"

class Graph {
public:
	CreateGraph(int &v, int &e);
	Graph();	
	~Graph();
	int getNrOfVerticiesInGraphh() const;
	int getNrOfEdgesInGrapgh() cont;
	void setNrOfVerticies();
	void setNrOfEdges();
private:
	Graph(int v, int e);
	Edge* edge;
	int verticies, edges;
};
#endif // !GRAPH_H
