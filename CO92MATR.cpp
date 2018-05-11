#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,flag=1;
		cin>>n>>m;
		
		vector <vector <lli> > mat(n, vector <lli> (m) );
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>mat[i][j];
		
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(i==0 && j==0)
			{
				if(mat[i][j]==-1)
				mat[i][j]=1;
			}
			else if(i==0&&j!=0)
			{
				if(mat[i][j]==-1)
				mat[i][j]=mat[i][j-1];
			}
			else if(i!=0&&j==0)
			{
				if(mat[i][j]==-1)
				mat[i][j]=mat[i-1][j];
			}
			else
			{
				if(mat[i][j]==-1)
				mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
			}
		}
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(i==0&&j==0)
			continue;
			else if(i==n-1&&j==m-1)
			break;
			else if(i==n-1&&j!=m-1)
			{
				if(mat[i][j+1]<mat[i][j])
				{
					flag=0;
					break;
				}
			}
			else if(i!=n-1&&j==m-1)
			{
				if(mat[i+1][j]<mat[i][j])
				{
					flag=0;
					break;
				}
			}
			
			else 
			{
				if(mat[i][j+1]<mat[i][j]||mat[i+1][j]<mat[i][j])
			    {
					flag=0;
					break;
		    	}
			}
		}
		if(flag==0)
		cout<<"-1"<<endl;
		else 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
			cout<<endl;
		}		
		
	}
}
