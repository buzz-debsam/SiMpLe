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
		int k;
		cin>>k;
		vector <int> ar(n);
		vector <int> a1;
		vector <int> a2;
		for(int i=0;i<n;i++)
		{
		 	cin>>ar[i];
		 	if(i%2==0)
		 	a1.push_back(ar[i]);
		 	else
		 	a2.push_back(ar[i]);		 	
		}
		sort(a1.begin(),a1.end());
		sort(a2.begin(),a2.end());
		
		int x=a1.size();
		int y=0;
		
		while(k!=0)
		{
			if(a1[x-1]>a2[y])
			{
				swap(a1[x-1],a2[y]);
				k--;
				x--;
				y++;
			}
			else break;
		}
		int sum1=0,sum2=0;
		for(int i=0;i<a1.size();i++)
			sum1+=a1[i];
			
		for(int i=0;i<a2.size();i++)
			sum2+=a2[i];
			
		if(sum2>sum1)
		cout<<"YES"<<endl;
		
		else cout<<"NO"<<endl;		
	}
}
