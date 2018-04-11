#include<bits/stdc++.h>
#define inf 1000000000
#define v 9
using namespace std;

int minDist(int dist[],bool vis[])
{
	int min = inf, minInd;
  
   for (int i = 0; i < v; i++)
     if (vis[i] == false && dist[i] <= min)
         min = dist[i], minInd = i;
  
   return minInd;
}
int max_path(int dist[])
{
	int m=0,maxInd;
	for(int i=0;i<v;i++)
	{
		if(dist[i]>=m)
		{
			m=max(m,dist[i]);
			maxInd=i;			
		}
		
	}
	
	cout<<m;
	return maxInd;	
}

int dijkstra(int graph[][v],int src)
{
	int dist[v];
	bool vis[v];
	
	for(int i=0;i<v;i++)
	{
		dist[i]=inf;
		vis[i]=false;
	}
	
	dist[src]=0;
	
	for(int i=0;i<v-1;i++)
	{
		int u=minDist(dist,vis);
		
		vis[u]=true;
		
		for(int j=0;j<v;j++)
		if(!vis[j] && graph[u][j] && dist[u]!=inf && dist[u]+graph[u][j]<dist[j] )
			dist[j]=dist[u]+graph[u][j];
	}
	
	return max_path(dist);	
	
}


int main()
{
	int graph[v][v] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
  
    int a=dijkstra(graph, 0);
    cout<<endl;
    int b=dijkstra(graph, a);
    cout<<" distance from "<<a<<" to"<<b<<endl;
  
    return 0;
}

