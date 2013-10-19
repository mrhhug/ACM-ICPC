#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

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
        queue<pair<int,int> > que;
        pair<int, int> pai;
        int destinationnode = 6;
        int startnode = 1;
        int currentnode=startnode;
        que.push(make_pair(startnode,-1));
        while(que.size()>0)
        {
                pai=que.front();
                que.pop();
                if(pai.second>0)
                        currentnode=pai.second;
                for(int i=0;i<v;i++)
                {
                        if (matrix[currentnode][i]>0)
                        {
                                que.push(make_pair(currentnode,i));
                                matrix[currentnode][i]=-1;
                        }
                }
                cout << pai.first << "," << pai.second << endl;
        }
        //dfs to destination node
        stack<pair<int,int> > sta;
        pair<int, int> pai;
        int destinationnode = 6;
        int startnode = 1;
        int currentnode=startnode;
        sta.push(make_pair(startnode,-1));
        while(sta.size()>0)
        {
                pai=sta.top();
                sta.pop();
                if(pai.second>0 )
                        currentnode=pai.second;
                for(int i=0;i<v;i++)
                {
                        if (matrix[currentnode][i]>0)
                        {
                                sta.push(make_pair(currentnode,i));
                                matrix[currentnode][i]=-1;
                        }
                }
                cout << pai.first << "," << pai.second << endl;
        }
	*/
}
