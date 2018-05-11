#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		lli n=y-x;
		cout<<(n*4*x*x+4*x*n*n+n*(2*n+1)*(2*n-1)/3)%(lli)(pow(10,9)+7)<<endl;
	}
}
