//Kristoffer Danbrant 880429-7490
#include "graph.h"
void Kruskal(Graph* graph);
void readFile(const char &argv[], int &nrOfNodes, int &nrOfEdges);
#int main(int argc, const char * argv[]) {
	
	int tempVariable;
	int nrOfNodes = 0;
	int nrOfEdges = 0;
	readFile(argv[1], nrOfNodes, nrOfEdges);
	if (nrOfEdges < nrOfNodes) {
		exit(-3);
	}
	Graph* graph = createGraph(nrOfNodes, nrOfEdges);
}



	return 0;
}

void Kruskal(Graph* graph) {
	int verticies = graph.getNrOFverticies();
	Edge result[verticies];
	int nrOfEdges = 0, sortedEdges = 0;

	qSort(graph->edge, graph->edges, sizeof(graph->edge[0], compareEdges);
	subset *subsets =
		subset* mySubsets = new subset[verticies * sizeof(subset)]

		for (int i = 0; i < verticies; ++i) {
			subsets[i].parent = i;
			subsets[i].rank = 0;
}

	while (nrOfEdges < verticies - 1) {
		Edge next_edge = graph->edge[sortedEdges];

		int x = find(subests, next_edge.src);
		int y = find(subsets, next_edge.dest);

		if (x != y) {
			result[nrOfEdges++] = next_edge;
			createUnion(Subsets, x, y);

			}

		}
	printf("Following are the edges in the constructed MST\n");
	for(int i = 0; i < nrOfEdges; ++i){
		printf("%d -- %d == %d\n", result[i].src, result[i].dest, result[i].weight);
	}
	return;
}


void readFile(const char & argv[], int & nrOfNodes, int & nrOfEdges) {
	int tempVariable = 0;
	myReadFile.open(argv[1]);
	myReadFile >> tempVariable;
	if (in.fail()) {
		exit(-1);
	}
	else {
		nrOfNodes = tempVariable;
	}
	myReadFile >> tempVariable;
	if (in.fail()) {
		exit(-2);
	}
	else {
		nrOfEdges = tempVariable;
	}
}