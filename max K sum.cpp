#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector <int> ar(n);
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int sum=0;
	int m=0;
	for(int i=0;i<k;i++)
		sum+=ar[i];
	m=sum;	
	for(int i=k;i<n;i++)
	{
		sum=sum+ar[i]-ar[i-k];
		m=max(sum,m);
	}	
	
	cout<<" Max Sum of K contiguous elements is= "<<m<<endl;	
}
