#include<bits/stdc++.h>
#define INF 1000000000
#define v 4

using namespace std;
void print(int dist[][v])
{
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		if(dist[i][j]==INF)
			cout<<" INF ";
		else cout<<" "<<dist[i][j]<<" ";
		
		cout<<endl;
	}
			
}
void fW(int graph[v][v])
{
	int dist[v][v],i,j,k;
	
	for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
			dist[i][j]=graph[i][j];
			
	
	for(int k=0;k<v;k++)
		for(int i=0;i<v;i++)
			for(int j=0;j<v;j++)
				if(dist[i][k]+dist[k][j]<dist[i][j])
						dist[i][j]=dist[i][k]+dist[k][j];
	
	print(dist);					
						
}

int main()
{
	int graph[v][v] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
                      
    fW(graph);                  
	return 0;
}
