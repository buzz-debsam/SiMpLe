#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

lli fib(lli n)
{
  	lli ar[n+2]; 
    
  	ar[0]=0;
  	ar[1]=1;
 
  for (lli i=2; i<=n; i++)
  {
      ar[i]=ar[i-1]+ar[i-2];
  }
 
  return ar[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli m,n;
		cin>>m>>n;
		
		vector <lli> a(m);
		vector <lli> b(m);
		
		for(lli i=0;i<m;i++)
			cin>>a[i];
		
		for(lli i=0;i<m;i++)
			cin>>b[i];		
			
		lli result=0;
		if(n==1)
		{
			lli sum=0;
			for(int i=0;i<m;i++)
				sum=(sum+a[i])%mod;
				
			result=(m*sum)%mod;
			cout<<result<<endl;
		}	
		
		else if(n==2)
		{
			lli sum=0;
			for(int i=0;i<m;i++)
				sum=(sum+b[i])%mod;
				
			result=(m*sum)%mod;
			cout<<result<<endl;
		}
		else
		{
			lli x=fib(n-2);
			lli y=fib(n-1);
			vector <lli> f(n);
			f[0]=a[0];
			f[1]=b[0];
			for(int j=2;j<n;j++)
				f[j]=(f[j-1]+f[j-2])%mod;
			
			result=(result+f[n-1])%mod;	
			lli sum1=0;
			for(int i=0;i<m;i++)
			{	
				sum1+=(b[i]-b[0]);
			}
			result=((m*result)%mod+(y*sum1)%mod)%mod;
			lli sum2=0;	
			for(int i=0;i<m;i++)
			{
				sum2+=(a[i]-a[0])*m;
			}
		
			result=((m*result)%mod+(x*sum2)%mod)%mod;
			cout<<result<<endl;
		}
		
	}
}
