#include "subset.h"

Subset::Subset()
{
}

Subset::~Subset()
{
}

int Subset::find(subsets[], int i)
{
	if (subsets[i].parent != i) {
		subsets[i].parent = find(subsets, subsets[i].parent);
	}
	return subsets[i].parent;
}

void Subset::createUnion(subsets[], int x, int y)
{
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);

	if (subsets[xroot].rank) < subsets[yroot].rank){
	subsets[xroot].parent = yroot;
}
	else if (subsets[xroot].rank > subsets[yroot].rank) {
		subsets[yroot].parent = xroot;
	}
	else {
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

int Subset::compareEdges(const void * a, const void * b)
{
	Edge* a1 = (Edge*)a;
	Edge* b1 = (Edge*)b;
	return a1->weight > b1->weight;
	
}
