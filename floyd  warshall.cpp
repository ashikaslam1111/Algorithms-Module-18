#include<bits/stdc++.h>
using namespace std;
const int N=100;
const int infinity=10000;
int adjacency_matrix[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j==i)continue;
            adjacency_matrix[i][j]=infinity;
        }
    }
    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjacency_matrix[u][v]=w;
    }
    for(int k=1; k<=n; k++)
    {
        for(int u=1; u<=n; u++)
        {
            for(int v=1; v<=n; v++)
            {
                if(adjacency_matrix[u][v]>adjacency_matrix[u][k] + adjacency_matrix[k][v])
                    adjacency_matrix[u][v]=adjacency_matrix[u][k] + adjacency_matrix[k][v];
            }
        }
    }

    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
          cout<<adjacency_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
