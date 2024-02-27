#include <iostream>

using namespace std;

class graph {

private:
	static int vertices, edges;
	const int MAX_VERTICES = 50;
	int mat[MAX_VERTICES][MAX_VERTICES];

public:
	graph(int v, int e);
	int creategraph();
	int printgraph();
	int returnV();
	int returnE();
	~graph();
};

graph::graph(int v, int e)
{
	v = vertices;
	e = edges;
}

graph::creategraph()
{
	return 0;
}

graph::printgraph()
{
	return 0;
}

graph::returnV()
{
	return vertices;
}

graph::returnE()
{
	return edges;
}

graph::~graph()
{
	std::cout << "Destroyed" << std::endl;
}
