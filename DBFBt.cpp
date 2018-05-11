#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli m,n,sum1=0,sum2=0;
		cin>>m>>n;
		
		vector <lli> a(m);
		vector <lli> b(m);
		vector <lli> f(n+2);
		
		for(lli i=0;i<m;i++)
			cin>>a[i];
		
		for(lli i=0;i<m;i++)
			cin>>b[i];	
			
		for(int i=0;i<m;i++)
				sum1=(sum1+a[i])%mod;	
			
		for(int i=0;i<m;i++)
				sum2=(sum2+b[i])%mod;
		
		f[0]=m*sum1;
		f[1]=m*sum2;
		for(int i=2;i<n;i++)
		{
			f[i]=(f[i-1]+f[i-2])%mod;		
		}		
		
		cout<<f[n-1]<<endl;					
	}
}
