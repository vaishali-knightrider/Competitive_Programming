#include<bits/stdc++.h>
#include <vector>
using namespace std;

// unweighted undirected graph
int main()
{

    int numVertices, numEdges, u , v;
    cin>>numVertices>>numEdges;
    vector<int> adjList[numVertices];

    //creating adjList
    cout<<"Provide u, v for edges :\n";
    for(int i=0;i<numEdges;i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    //printing elements of vector

    // using size
    for(int i=0;i<numVertices;i++)
    {
        cout<<"src vertex - "<<i<<"\n";
        for(int j=0;j<adjList[i].size();j++)
        {
            cout<<"dest vertices - "<<adjList[i][j]<<"\n";
        }
        cout<<"\n";
    }
    /*
    cout<<"using auto :::::::::::\n";
    // auto
    for(auto verticesList:adjList)
    {
        for(auto vertex: verticesList)
        {
            cout<<vertex<<",";
        }
        cout<<"\n";
    }
    */
    return 0;
}

