#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m=INF;
		vector <int> ar(n);
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			m=min(m,ar[i]);
		}
		int flag=0;
		for(int i=2;i<=m;i++)
		{
			int count=0;
			for(int j=0;j<n;j++)
			{
				if(ar[j]%i==0)
					++count;			
			}
			if(count==n)
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		cout<<"0"<<endl;
		else cout<<"-1"<<endl;
	}
	
	return 0;
}
