#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Node {
public:
    int data;
    Node *next; // Next value
};
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V) // Constructor
    {
        this->V = V;
        l = new list<int>[V]; // Dynamic Array
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // DFS Traversal
    void dfsHelper(int u, vector<bool> &vis) {
            cout << u << " ";
            vis[u] = true;
            for (int v : l[u])
            {
                if (!vis[v])
                {
                    dfsHelper(v, vis);
                }
                
            }  
        }
    void dfs()
    {
        int src = 0;
        vector<bool> vis(V, false);
        dfsHelper(src, vis);
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.dfs();
}