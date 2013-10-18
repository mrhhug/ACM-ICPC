#include<iostream>
using namespace std;

#define INF 101

int V, e, start, end, weight;

int minDist(int dist[], bool sptSet[], int v)
{
	int min = INF, min_index;

	for(int i=0;i<v;i++) {
		if(sptSet[i] == false && dist[i] <= min) {
			min = dist[v];
			min_index = v;
		}
	}
return min_index;
}

int dijkstra(int src, int graph[100][100])
{
	int dist[V];
	bool sptSet[V];

	for(int i=0;i<V;i++) {
		dist[i] = INF;
		sptSet[i] = false;
	}
	dist[src] = 0;

	for(int count=0;count<V-1;count++) {
		int u = minDist(dist, sptSet, V);

		sptSet[u] = true;

		for(int v=0;v<V;v++) {
			if(sptSet == false && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
		}
	}
	int total = 0;
	for(int i=0;i<V;i++)
		total += dist[i];
return total;
}

int main()
{
	cin >> V >> e;
	int g[V][V] = {INF};
	for(int i=0;i<e;i++) {
		cin >> start >> end >> weight;
		g[start][end] = weight;
	}

	cout << dijkstra(0, *g) << endl;
return 0;
}
