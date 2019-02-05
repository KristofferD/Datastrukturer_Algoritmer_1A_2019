#ifndef SUBSET_H
#define SUBSET_H

class Subset
{
public:
	Subset();
	~Subset();
	int find(subsets[], int i);
	void createUnion(subsets[], int x, int y);
	int compareEdges(const void* a, const void* b);
private:
	int parent, rank;
};

#endif // !SUBSET_H
