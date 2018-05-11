#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int flag1=0,flag2=0;
		
		vector <lli> f(n),g(n);
		for(int i=0;i<n;i++)
		cin>>f[i];
		
		for(int i=0;i<n;i++)
		cin>>g[i];
		
		for(int i=0;i<n;i++)
			if(f[i]>g[i])
			{
				flag1=1;
				break;
			}	
			
		for(int i=0;i<n;i++)
			if(f[i]>g[n-1-i])
			{
				flag2=1;
				break;
			}		
			
		if(flag1==0&&flag2!=0)
		cout<<"front"<<endl;
		else if(flag2==0&&flag1!=0)
		cout<<"back"<<endl;
		else if(flag2==0&&flag1==0)	
		cout<<"both"<<endl;
		else cout<<"none"<<endl;	
	}
}
