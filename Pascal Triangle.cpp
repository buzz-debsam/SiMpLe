#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
    vector <vector <int> > ar (n, vector <int> (n));
    
    for(int i=0;i<n;i++)
    {
    	ar[i][i]=1;
    	ar[i][0]=1;
	}
    
    for(int i=2;i<n;i++)
    for(int j=i-1;j>((i-1)/2);j--)
    {
    	ar[i][j]=(i/(i-j))*ar[i-1][j];
    	ar[i][i-j]=ar[i][j];
	}
	int s=n;
	for(int i=0;i<n;i++)
	{
		int s1=s;
		while(s1--)
		cout<<" ";
		for(int j=0;j<n;j++)
		if(ar[i][j]!=0)
		cout<<ar[i][j]<<" ";
		cout<<endl;
		s--;
	}
	
}

