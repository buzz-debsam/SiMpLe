#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		vector <lli> ar(n);
		for(lli i=0;i<n;i++)
		cin>>ar[i];
		
		lli xrr=ar[0]+ar[0];
		
		for(lli i=1;i<n;i++)
		{
				xrr=xrr xor(2*ar[i]);
		}
		cout<<xrr<<endl;
	}
}

