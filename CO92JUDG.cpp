#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> a(n),b(n);
		int ma=0,mb=0,suma=0,sumb=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ma=max(ma,a[i]);
			suma+=a[i];
		}
		suma-=ma;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			mb=max(mb,b[i]);
			sumb+=b[i];
		}
		sumb-=mb;
		
		if(sumb>suma)
		{
			cout<<"Alice"<<endl;
		}
		else if(suma>sumb)
		cout<<"Bob"<<endl;
		else cout<<"Draw"<<endl;
	}
}
