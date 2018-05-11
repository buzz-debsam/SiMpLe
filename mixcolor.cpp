#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		vector <int> ar(n);
		for(int i=0;i<n;i++)
		cin>>ar[i];
		sort(ar.begin(),ar.end());
		for(int i=1;i<n;i++)
		{
			if(ar[i]==ar[i-1])
			count++;
		}
		cout<<count<<endl;
	}
}
