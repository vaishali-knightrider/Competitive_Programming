#include<bits/stdc++.h>
using namespace std;

// weighted undirected graph
int main()
{
    // vertices are numbered from 0
    int numVertices, numEdges, u , v, w;
    cin>>numVertices>>numEdges;

    // create adj matrix
    int adjMatrix[numVertices][numVertices];

    // intialize adj matrix
    for(int i=0;i<numVertices;i++)
    {
        for(int j=0;j<numVertices;j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    // fill adj matrix
    for(int i=0;i<numEdges;i++)
    {
        cin>>u>>v>>w;
        adjMatrix[u][v] = w;
        adjMatrix[v][u] = w;
    }

    // print adj matrix
    cout<<"Adj Matrix :::::::::::::::::\n";
    for(int i=0;i<numVertices;i++)
    {
        for(int j=0;j<numVertices;j++)
        {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
