#include<bits/stdc++.h>
using namespace std;

// non-weighted undirected graph
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
        cin>>u>>v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
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
