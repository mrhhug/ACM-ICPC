#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

//these are edges, i am keeping track of edges, not nodes.
struct edge
{
	int source;
	int dest;
	int weight;
	bool visited;
	vector<edge> children;

	bool operator<(const edge& a) const
	{
	        return source < a.source;
	}
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
			if(spath.size()==0)
			{
				head.children.push_back(nd);
				///this is optional, it sorts the children
				sort(head.children.begin(),head.children.end());
			}
			else
			{
				print(spath);
				//HEHRHERHEHRHEHRHERHHEHEHRHER
				edge ed =spath.at(spath.size());
				for(int i =0;i<spath.size() && ed.dest!=nd.source; i++)
				{
					ed=spath.at(i);
					ed.children.push_back(nd);
				///this is optional, it sorts the children
					sort(ed.children.begin(),ed.children.end());
				}
			}
		}
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
		queue<edge> col;
		edge current;
		current = head;
		for(int i=0;i<current.children.size();i++)
		{
			col.push(current.children.at(i));
		}
		while(col.size()>0)
		{
			current = col.front();
			col.pop();
			path.push_back(current);
			for(int i =0;current.children.size();i++)
			{
				col.push(current.children.at(i));
			}
			//col.push(node
		}
		return path;
	}
	//pass something like -2 for a full dfs
	vector<edge> dfs(int dest)
	{
		vector<edge> path;
		stack<edge> col;
		edge current;
		current = head;
		for(int i=0;i<current.children.size();i++)
		{
			col.push(current.children.at(i));
		}
		while(col.size()>0)
		{
			current = col.top();
			col.pop();
			path.push_back(current);
			for(int i =0;current.children.size();i++)
			{
				col.push(current.children.at(i));
			}
		}
		return path;
	}
	vector<edge> shortestHops(int source, int dest)
	{
		vector<edge> returnPath;
		vector<edge> tempath;
		if(source == dest)
		{
			return returnPath;
		}
		tempath = bfs(-2);
		
		return returnPath;
	}
	void print(vector<edge> vect)
	{
		cout << "size =" << vect.size();
		for(int i =0;i<vect.size();i++)
		{
			cout << "source :" << vect.at(i).source << " dest : " << vect.at(i).dest << " ";
		}
		cout << endl;
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
	gr.add(1,4,35);
	gr.add(1,3,35);
	gr.add(2,7,35);
	gr.add(2,6,35);
	gr.add(2,5,35);
	gr.add(2,8,35);
	gr.add(7,8,99);
	gr.add(4,12,35);
	gr.add(4,10,15);
	gr.add(4,11,45);
	gr.add(10,13,45);
	gr.add(3,9,99);
	vector<edge> path = gr.bfs(-2);
	cout << "starting bfs" << endl;
	for(int i =0;i<path.size();i++)
	{
		cout << path.at(i).source << "-" << path.at(i).dest << "  ";
	}
	cout << endl;
	path = gr.dfs(-2);
	cout << "starting dfs" << endl;
	for(int i =0;i<path.size();i++)
	{
		cout << path.at(i).source << "-" << path.at(i).dest << "  ";
	}
	cout << endl;
	path = gr.bfs(-2);
	cout << "starting bfs" << endl;
	vector<int> check;
	for(int i =0;i<path.size();i++)
	{
		if(find(check.begin(),check.end(),path.at(i).source)!=check.end())
		{
			check.clear();
			cout<<endl;	
		}
		check.push_back(path.at(i).dest);
		cout << path.at(i).source << "-" << path.at(i).dest << "  ";

	}
	cout << endl;
	//cout << "head source=" << gr.returnHead().source<<" head dest="<<gr.returnHead().dest<<endl;
}
