#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;
struct triple
{
	int source;
	int dest;
	int weight;
};
int main()
{
	//initials
	int v,e,source,dest,weight;
	cin >> v;
	cin >> e;
	//for some reason this Admiral starts counting at 1.... loser
	v++;
	int matrix[v][v];
	
	//from now on, when i say matrix, i mean adjacency matrix
	//zero out matrix
	for (int i=0;i<v;i++)
	{
		for (int j=0;j<v;j++)
		{
			matrix[i][j] = 0;
		}
	}
    
	//fill matrix
	for (int i=1;i<=e;i++)
	{
		cin >> source;
		cin >> dest;
		cin >> weight;
		matrix[source][dest]=weight;
	}
	
	//print matrix
	for (int i=0;i<v;i++)
	{
		for (int j=0;j<v;j++)
		{
			cout<<matrix[i][j] << "\t";
		}
		cout<<endl;
    	}
	//bfs
	/*
	queue<triple> col;
	triple tri;
	int destinationnode = 6;
	int startnode = 1;
	int currentnode=startnode;
	tri.source = startnode;
	tri.dest =-1;
	tri.weight=-1;
	col.push(tri);
	while(col.size()>0)
	{
		tri=col.front();
		col.pop();
		if(tri.dest>0 )
			currentnode=tri.dest;
		for(int i=0;i<v;i++)
		{
			if (matrix[currentnode][i]>0)
			{
				tri.source = currentnode;
				tri.dest = i;
				tri.weight = matrix[currentnode][i];
				col.push(tri);
				matrix[currentnode][i]=-1;
			}
		}
		cout << tri.source << "," << tri.dest << "," << tri.weight << endl;
	}
	*/
	//dfs to destination node
	stack<triple> col;
	triple tri;
	int destinationnode = 6;
	int startnode = 1;
	int currentnode=startnode;
	tri.source = startnode;
	tri.dest =-1;
	tri.weight=-1;
	col.push(tri);
	while(col.size()>0)
	{
		tri=col.top();
		col.pop();
		if(tri.dest>0 )
			currentnode=tri.dest;
		for(int i=0;i<v;i++)
		{
			if (matrix[currentnode][i]>0)
			{
				tri.source = currentnode;
				tri.dest = i;
				tri.weight = matrix[currentnode][i];
				col.push(tri);
				matrix[currentnode][i]=-1;
			}
		}
		cout << tri.source << "," << tri.dest << "," << tri.weight << endl;
	}
}


