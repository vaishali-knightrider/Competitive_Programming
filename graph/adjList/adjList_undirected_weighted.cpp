 #include<bits/stdc++.h>
#include <vector>
using namespace std;

// weighted undirected graph
int main()
{

    int numVertices, numEdges, u, v, w;
    cin>>numVertices>>numEdges;
    vector<pair<int,int>> adjList[numVertices];

    //creating adjList
    for(int i=0;i<numEdges;i++)
    {
        cin>>u>>v>>w;
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));
    }
    //printing elements of vector
    for(int i=0;i<numVertices;i++)
    {
        cout<<"src vertex - "<<i<<"\n";
        for(int j=0;j<adjList[i].size();j++)
        {
            v=adjList[i][j].first;
            w=adjList[i][j].second;
            cout<<"neigh vertex - "<<v<<" , "<<"edge wt - "<<w<<"\n";
        }
    }
    return 0;
}

