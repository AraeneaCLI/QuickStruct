#include <iostream>

const int MAX_VERTICES = 50;
int mat[MAX_VERTICES][MAX_VERTICES];

int readgraph(int vertices)
{
	char var;

	std::cout << "Enter the No of Vertices: " << std::endl;
	std::cin >> vertices;

	for (int i = 1; i <= vertices; i++)
	{
		for (int j = 1; j <= vertices; j++)
		{
			if (i == j)
			{
				mat[i][j] = 0;
			}

			std::cout << "Are Vertices " << i << " and " << j << " Adjacent (Y/N)?" << std::endl;
			std::cin >> var;

			if (var == 'Y' || var == 'y')
			{
				mat[i][j] = 1;
			}
			else
			{
				mat[i][j] = 0;
			}
		}
	}

	return vertices;
}

void printgraph(int vertices)
{
	std::cout << "The Adjacency Matrix for Given Graph:" << std::endl;

	for (int i = 1; i <= vertices; i++)
	{
		for (int j = 1; j <= vertices; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void creategraph()
{
	int vertices;
	int indeg = 0, outdeg = 0;

	std::cout << "Enter the Number of Vertices: " << std::endl;
	std::cin >> vertices;

	vertices = readgraph(vertices);

	for (int i = 1; i <= vertices; i++)
	{
		indeg = 0;
		outdeg = 0;

		for (int j = 1; j <= vertices; j++)
		{
			if (mat[j][i] == 1)
				indeg++;
		}

		for (int j = 1; j <= vertices; j++)
		{
			if (mat[i][j] == 1)
				outdeg++;
		}

		std::cout << std::endl;
		std::cout << "Vertex " << i << std::endl;
		std::cout << "IN Degree " << indeg << std::endl;
		std::cout << "OUT Degree " << outdeg << std::endl;
	}

	printgraph(vertices);
}