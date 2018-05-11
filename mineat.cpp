#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli binSearch(vector <lli> p, lli h, lli l,lli r)
{
	lli mid=(l+r)/2;
	if(l>r)
	return mid;
	else
	{
		lli count=0;
		for(int i=0;i<p.size();i++)
		{
			if(p[i]/mid==0)
			count++;
			else
			{
				if(p[i]%mid==0)
				count+=p[i]/mid;
				else count+=p[i]/mid+1;
			}
		}
		
		if(count==h||count>h)
		return binSearch(p,h,l,mid-1);
		
		else return binSearch(p,h,mid+1,r);
	}

     return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,h,m=0;
		cin>>n>>h;
		vector <lli> p(n);
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			m=max(m,p[i]);
		}	
		
		lli k=binSearch(p,h,1,m);
		cout<<k<<endl;	
	}
}
