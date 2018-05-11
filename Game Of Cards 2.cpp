#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	lli a,b;
	cin>>a>>b;
	vector <lli> l1(a),l2(b);
	for(lli i=0;i<a;i++)
	cin>>l1[i];
	for(lli i=0;i<b;i++)
	cin>>l2[i];
	
	sort(l1.begin(),l1.end());
	sort(l2.begin(),l2.end());
	
	lli	i=0,j=0;
	while(i!=a && j!=b)
	{
		if(l2[j]<l1[i])
		{
			l1[i]=0;
			l2[j]=0;
			j++;
		}
		i++;
	}
	int flag=1;
	for(lli i=0;i<b;i++)
	{
		if(l2[i]!=0)
		{
			flag=0; break;
		}
	}
	
	if(flag==1)
	{
		lli sum=0;
		for(lli i=0;i<a;i++)
		sum+=l1[i];
		cout<<sum<<endl;
	}
	else cout<<"-1"<<endl;
}
