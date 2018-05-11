#include<bits/stdc++.h>
#define lli long long int
#define mod (lli)(pow(10,9) + 7)
using namespace std;
lli p(lli a, lli b) {
    lli result=1;
    while(b != 0) 
	{
        if(b%2 == 1)
            result=(result*a)%mod;
        a=(a*a)%mod;
        b /= 2;
    }
    return result%mod;
}
int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		lli k;
		cin>>k;
		lli sum=(p(2,(k-1))*p(5,k)+p(4,k)*p(2,k-1));
		cout<<sum%mod<<endl;
	}
}
