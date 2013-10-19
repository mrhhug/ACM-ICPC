#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>    // std::for_each

using namespace std;
struct edge
{
	int source;
	int dest;
	int weight;
	bool visited;
};
void printedges(edge ed)
{
	cout << ed.source << "," << ed.dest << "," << ed.weight << endl;
}
int main()
{
	//initials
	int v,e,source,dest,weight;
	cin >> v;
	cin >> e;
	//for some reason this Admiral starts counting at 1.... loser
	v++;
	//int matrix[v][v];
	vector<edge> vect;
	
	//fill vector
	edge ed;
	for (int i=1;i<=e;i++)
	{
		cin >> source;
		cin >> dest;
		cin >> weight;
		ed.source=source;
		ed.dest=dest;
		ed.weight=weight;
		ed.visited=false;
		vect.push_back(ed);
	}
	
	//print vector
	for_each (vect.begin(),vect.end(),printedges);
	
	stack<edge> sta;

	do
	{
		ed=vect.front();
		if (ed.visited==false)
		{
			ed.visited = true;
			sta.push(ed);
			for (int i =0 ; i<v;i++)
			{
		}


	}while(sta.size()>0);
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
		if(tri.dest>0)
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
}


