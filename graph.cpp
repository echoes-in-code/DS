#include<iostream>
using namespace std;
int main()
{
  int vertex,edges,u,v;
  cout<<"enter no. of edges";
  cin>>vertex;
  cout<<"enetr no. of vertices";
  cin>>edges;
  int matrix[100][100]={0};
cout<<"enter edges as pair";
    for(int i=0;i<edges;i++)
    {
       cin>>u>>v;
       matrix[u][v]=1;
       matrix[v][u]=1;
    }
    cout<<"adjacency matrix is \n";
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
       cout<<matrix[i][j];
        }
       cout<<endl;
        
    }
    
return 0;
    
}
