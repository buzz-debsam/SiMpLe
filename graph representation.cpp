#include<bits/stdc++.h>
using namespace std;
vector <int> deg (5);
vector <int> vis (5);
vector <int> vis2 (5);
list <int> q;


void newEdge1(vector <vector <int> > &adMat, int u, int v)
{
	adMat[u][v]=1;
	adMat[v][u]=1;
}

void newEdge2(vector <vector <int> > &adList, int u, int v)
{
	adList[u].push_back(v);
	adList[v].push_back(u);
	deg[u]++;
	deg[v]++;
}

void printAdMat(vector <vector <int> > adMat,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<adMat[i][j]<<" ";
		cout<<endl;
	}
	
}

void printAdList(vector <vector <int> > adList, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<i;
		for(int j=0;j<adList[i].size();j++)
		cout<<"->"<<adList[i][j];
		cout<<endl;
	}
}

void degree1(vector <vector <int> > adMat,int n)
{
	vector <int> degree (n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(adMat[i][j]==1)
			if(i==j)
			degree[i]+=2;
			else degree[i]++;
	}
	for(int i=0;i<n;i++)
	cout<<"(adMat)degree of vertex "<<i<<"= "<<degree[i]<<endl;
	
}
void degree2(vector <vector <int> > adList,int n)
{
	for(int i=0;i<n;i++)
	cout<<"(adList)degree of vertex "<<i<<"= "<<deg[i]<<endl;
}
void DFS(vector <vector <int> > adList, int k)
{
	vis[k]=1;
	cout<<k<<"->";
	for(int i=0;i<adList[k].size();i++)
		if(vis[adList[k][i]]==0)
			DFS(adList,adList[k][i]);
		
}
void BFS(vector <vector <int> > adList, int k)
{
	vis2[k]=1;
	for(int i=0;i<adList[k].size();i++)
	{
		if(vis2[adList[k][i]]==0)
		{
			q.push_back(adList[k][i]);
			vis2[adList[k][i]]=1;
		}		
	}
	while(!q.empty())
	{
		int z=q.front();
		q.pop_front();
		cout<<"->"<<z;
		BFS(adList,z);		
	}		
}
int main()
{
	int n;
	cout<<"Enter number of edges: ";
	cin>>n;
	vector <vector <int> > adMat (n, vector <int> (n));
	vector <vector <int> > adList (n);
	newEdge1(adMat, 0, 1);
    newEdge1(adMat, 0, 4);
    newEdge1(adMat, 1, 2);
    newEdge1(adMat, 1, 3);
    newEdge1(adMat, 1, 4);
    newEdge1(adMat, 2, 3);
    newEdge1(adMat, 3, 4);
    printAdMat(adMat,n);
    newEdge2(adList, 0, 1);
    newEdge2(adList, 0, 4);
    newEdge2(adList, 1, 2);
    newEdge2(adList, 1, 3);
    newEdge2(adList, 1, 4);
    newEdge2(adList, 2, 3);
    newEdge2(adList, 3, 4);
    printAdList(adList,n);
    degree1(adMat,n);
    degree2(adList,n);
    DFS(adList,1);cout<<"DFS";cout<<endl;
    cout<<"1";BFS(adList,1);cout<<"->BFS";
}

