using namespace std;

int readgraph()
{
	int mat[50][50], int vertices;
	char var;

	cout << "Enter the No of Vertices:- " << endl;
	cin >> vertices;
	
	for(int i=1;i<=vertices;i++)
	{
		for(int j=1;j<=vertices;j++)
		{
			if(i==j)
			{
				mat[i][j]=0;
			}
			
			cout<<"Are Vertices "<<i<<" and "<<j<<" Adjacent (Y/N)?"<<endl;
			cin>>var;
			
			if(var=='Y' || var=='y')
			{
				mat[i][j]=1;
			}
			
			else
			{
				
				mat[i][j]=0;
			}
		}
		
	}
	
	return 0;
}

int printgraph(int mat[50][50],int vertices)
{	
	cout<<"The Adjacency Matrix for Given Graph:- "<<endl;
	
	for(int i=1;i<=vertices;i++)
	{
		for(int j=1;j<=vertices;j++)
		cout<<""<<mat[i][j];
		cout<<""<<endl;
	}
	
	return 0;
}

int creategraph()
{
	int mat[50][50];
	int vertices;
	int indeg=0, outdeg=0;
	
	cout<<"Enter the Number of Vertices"<<endl;
	cin>>vertices;
	
	readgraph(mat, vertices);
	
	for(int i=1;i<=vertices;i++)
	{
		for(int j=1;j<=vertices;j++)
		{
			if(mat[j][i]==1)
			indeg++;
			
			
		}
		
		for(int j=1;j<=vertices;j++)
		{
		if(mat[i][j]==1)
		    outdeg++;
		}
		
		cout<<""<<endl;
		cout<<"Vertex "<<i<<endl;
		cout<<"IN Degree "<<indeg<<endl;
		cout<<"OUT Degree "<<outdeg<<endl;
		
	}
	
	printgraph(mat,vertices);
	
	return 0;
}