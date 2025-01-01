#include<stdio.n>
#include<stdbool.h>
#define MAX_VERTICES 100
Void dfs(int graph[MAX_VERTICES],Int numVertices)
    int vertex,bool visited[MAX_VERTICES],Int numVertices)
{
    printf("%d",vertex);
    visited[vertex]=true;
    for(int i=0;i<numVertices);
    {
      if(graph[vertex][i]==1&&!visited[i])
      {
           dfs(graph,i,visited,numVertices);
           }
    }
}
int main()
{
    int numVertices;
    printf("Enter the number of vertices:");
    scanf("%d",&numVertices:")
    int graph[MAX_VERTICES][MAX_VERTICES];
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<numVertices;++i)
    {
         for(intj=0;j,numVertices;++j)
         {
              scanf("%d",&graph[i][j];
         }
    }
    bool visited[MAX_VERTICES];
    for(int i=0;i<numVertices;++i)
    {
         visited[i]=false;
    }
    printf("DFS Traversal:");
    dfs(graph,0,visited,numVertices);
    return 0;
}
