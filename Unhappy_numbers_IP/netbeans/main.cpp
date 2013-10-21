#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

//these are edges, i am keeping track of edges, not nodes.
struct edge
{
	int source;
	int dest;
	int weight;
	bool visited;
	vector<edge> children;
};
// the only thing is that you have to keep this graph connected, so take all the nodes and sort or something
class graph
{
private:
	int size;
	edge head;
	void addVer(edge nd)
	{
		if(size==0)
		{
			head.dest=nd.source;
			head.children.push_back(nd);
		}
		else
		{
			vector<edge> spath = shortestHops(head.dest, nd.source);
			print(spath);
			if(spath.size()==0)
			{
				head.children.push_back(nd);
			}
			else
			{
				
				spath.at(spath.size()).children.push_back(nd);
				//sort(spath.begin(),spath.end());
			}
		}
		//cout <<size<<endl;
		size++;
	}
public:
	//create the head node
	graph()
	{
		edge ed;
		ed.source=-1;
		ed.dest=-1;
		ed.weight=-1;
		ed.visited=false;
		size=0;
	}
	//call this to add to graph
	void add(int source,int dest,int weight)
	{
		edge nd;
		nd.source=source;
		nd.dest=dest;
		nd.weight=weight;
		nd.visited=false;
		addVer(nd);
	}
	//pass something like -2 for a full bfs
	vector<edge> bfs(int dest)
	{
		vector<edge> path;
		queue<edge> q;
		edge current;
		current = head;
		for(int i=0;i<current.children.size();i++)
		{
			q.push(current.children.at(i));
		}
		while(q.size()>0)
		{
			current = q.front();
			q.pop();
			path.push_back(current);
			for(int i =0;current.children.size();i++)
			{
				q.push(current.children.at(i));
			}
		}
		return path;
	}
	vector<edge> shortestHops(int source, int dest)
	{
		vector<edge> vect = bfs(-2);
		vector<edge> returnPath;
		vector<edge> possiblePath;
		bool beCounting = false;
		//find shortest path from shource to dest. 
		for(int i =0;i<vect.size();i++)
		{
			//printEdgeVect(vect);
			if(vect.at(i).source==source)
			{
				beCounting=true;
			}
			if(vect.at(i).source==dest)
			{
				beCounting=false;
				if(returnPath.size()<possiblePath.size())
				{
					returnPath=possiblePath;
					possiblePath.clear();
				}
			}
			if(beCounting)
			{
				possiblePath.push_back(vect.at(i));
			}
		}
		if(returnPath.size()<possiblePath.size())
		{
			returnPath=possiblePath;
			possiblePath.clear();
		}
		return returnPath;
	}
	void print(vector<edge> vect)
	{
		cout << "size =" << vect.size();
		for(int i =0;i<vect.size();i++)
		{
			cout << "source :" << vect.at(i).source << " dest : " << vect.at(i).dest << " " << endl;
		}
	}
	edge returnHead()
	{
		return head;
	}
};
int main()
{
	graph gr;
	gr.add(1,2,35);
	gr.add(1,3,35);
	gr.add(1,4,35);
	gr.add(2,7,35);
	gr.add(2,6,35);
	gr.add(2,5,35);
	gr.add(2,8,35);
	gr.add(7,8,99);
	gr.add(4,12,35);
	gr.add(4,10,15);
	gr.add(4,11,45);
	gr.add(3,9,99);
	vector<edge> path = gr.bfs(-2);
	cout << "starting loop" << endl;
	for(int i =0;i<path.size();i++)
	{
		cout << path.at(i).source << " " << path.at(i).dest << endl;
	}
	cout << "head source=" << gr.returnHead().source<<" head dest="<<gr.returnHead().dest<<endl;
}