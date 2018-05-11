#include<bits/stdc++.h>
#define lli long long int
#define mo 1000000007
using namespace std;

 
lli power(lli a, lli b, lli mod)
{
	lli x = 1, y = a;
	while (b > 0){
		if (b%2){
			x = (x*y)%mod;
		}
		y = (y*y)%mod;
		b /= 2;
	}
	return x%mod;
}	
 
lli modular_inverse(lli n, lli mod)
{
	return power(n, mod-2, mod);
}
 
int main()
{
	lli factorial [200001];
	factorial[0]=1;
    for(int i=1;i<200001;i++)
		factorial[i]=(factorial[i-1]*i)%mo;
		
	lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		lli sum=(factorial[2*n-1]*((modular_inverse(factorial[n-1],mo))%mo*(modular_inverse(factorial[n],mo))%mo));
		lli res=(2*sum-n)%mo;
		cout<<res<<endl;
	}
    return 0;
}
