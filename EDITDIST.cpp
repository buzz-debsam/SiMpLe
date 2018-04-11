#include<bits/stdc++.h>
using namespace std;

int editDist(string a, string b, int m, int n)
{
	vector <vector <int> > dp (m+1, vector <int> (n+1) );
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
    	{
    		if(i==0)
    		dp[i][j]=j;
    		
    		else if(j==0)
    		dp[i][j]=i;
    		
    		else if(a[i-1]==b[j-1])
    		dp[i][j]=dp[i-1][j-1];
    		
    		else 
    		dp[i][j]=1+min(dp[i-1][j],(min(dp[i-1][j-1],dp[i][j-1])));
		}
	}
	return dp[m][n];
	
}

int main()
{
	string a,b;
	cin>>a>>b;
	int m=a.size();
	int n=b.size();
	int mincost=editDist(a,b,m,n);
	cout<<"Minimum cost= "<<mincost<<endl;
}
