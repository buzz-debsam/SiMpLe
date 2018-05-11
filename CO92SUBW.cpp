#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli x;
		cin>>x;
		lli z=(sqrt(1+8*x)-1)/2;
		lli a=(z*(z+1))/2;
		lli b=((z+1)*(z+2))/2;
		if(x>(a+b)/2)
		cout<<z+1+(b-x)<<endl;
		else cout<<z+(x-a)<<endl;
	}
}
