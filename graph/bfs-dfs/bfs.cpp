#include<bits/stdc++.h>
using namespace std;

//implementing bfs algorithm on non-weighted graph
int main()
{
    int u,v=0;
    int j;
    int numVertices,numEdges, srcVertex;
    cin>>numVertices>>numEdges;
    vector<int> adj[numVertices];

    // input graph
    for(int i=0;i<numEdges;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<"Enter Source Vertex:\n";
    cin>>srcVertex;

    // apply bfs
    queue<int> q;
    bool visited[numVertices];
    memset(visited,0,numVertices);

    // process start vertex
    q.push(srcVertex);
    visited[srcVertex]=1;

    // process until q is empty
    while(!q.empty())
    {
        u=q.front();
        cout<<u<<" ";
        q.pop();

        //check neighbours of u
        for(int i=0;i<adj[u].size();i++)
        {
            v=adj[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                q.push(v);
            }
        }
    }
    return 0;
}
