#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
vector <lli> dp(100,0);

lli fibon(lli N)
{
	if(dp[N]|| N==0)
	return dp[N];
	else 
	{
		dp[N]=fibon(N-1)+fibon(N-2);		
		return dp[N];
	}
}

int main()
{
	lli n;
	cin>>n;
	dp[0]=0;
	dp[1]=1;
	vector <int> fi(n+1);
	lli fib=fibon(n);
	cout<<fib<<endl;	
}

