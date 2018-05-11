#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	cout<<fixed<<setprecision(10);
	while(t--)
	{
		int n;
		cin>>n;
	    double loss=0;
		vector <double> p(n),q(n),d(n);
		for(int i=0;i<n;i++)
		{
			double x;
			cin>>p[i]>>q[i]>>d[i];
			x=p[i]+d[i]*p[i]/100;
			loss+=(p[i]+x*d[i]/100-x)*q[i];			
		}
		
		cout<<loss<<endl;
	}
}
