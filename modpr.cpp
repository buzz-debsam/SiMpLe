#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		lli n,k;
		cin>>n>>k;
		lli sum=0;
		for(lli i=k+1;i<=n;i++)
		{
			if(n%i>=k)
			sum+=(n/i+1);
			else
			sum+=n/i;
		}
		cout<<sum<<endl;
	}
}
