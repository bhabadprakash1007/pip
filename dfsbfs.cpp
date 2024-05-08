#include<iostream>
#include<queue>
#include<map>
#include<list>
using namespace std;
class Graph1
{
    public:
    map<int,list<int>> adjacency;
    map<int , bool>Visited;
    queue<int>q;


    void addEdge (int src,int des)
    {
        adjacency[src].push_back(des);
        adjacency[des].push_back(src);
    }

    void DFS(int node){

        Visited[node]=true;
        cout<<node<<"  ";
        for(int i : adjacency[node])
        {
            if(!Visited[i])
            {
                DFS(i);
            }
        }
    }
    void BFS()
    {
        if(q.empty())
        {
            return;
        }
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int i : adjacency[node])
        {
            if(!Visited[i])
            {
                Visited[i]=true;
                q.push(i);

            }
        }
        BFS();
    }

};
int main()
{
    Graph1 g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,6);
    // g.DFS(0);

      g.q.push(0);
        g.Visited[0] = true;
        g.BFS();  

    return 0;

}