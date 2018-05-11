#include<bits/stdc++.h>
#define lli long long int
using namespace std;
struct item
{
	lli value;
	lli lcount;
	lli rcount;
	lli scount;
	lli tl;
	lli ts;
};
bool cmp(struct item a, struct item b)
	{
    	return a.value<b.value;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,q;
		cin>>n>>q;
		vector <item> ar(n);
		for(lli i=0;i<n;i++)
			cin>>ar[i].value;
		for(lli i=0;i<n;i++)
		{
			lli high=n-1,low=0;
			ar[i].rcount=0;
			ar[i].lcount=0;
			while(low<=high)
			{
				lli mid=low+(high-low)/2;
				
				if(mid==i)
				{
					break;
				}
				else if(i<mid)
				{
					if(ar[mid].value<ar[i].value)
						ar[i].rcount++;
					ar[i].tl++;
					high=mid-1;	
				}
				else 
				{
					if(ar[mid].value>ar[i].value)
						ar[i].lcount++;
					ar[i].ts++;	
					low=mid+1;
				}
			}
		}		
		
		sort(ar.begin(),ar.end(),cmp);
		
		for(lli i=0;i<n;i++)
		{
			if(ar[i].ts>i||ar[i].tl>(n-i-1))
				ar[i].scount=-1;
			else	ar[i].scount=max(ar[i].lcount,ar[i].rcount);
		}	
		
		for(lli i=0;i<q;i++)
		{
			lli x;
			cin>>x;
			lli l=0,r=n-1;
			while(l<=r)
			{
				lli m=l+(r-l)/2;
				
				if(ar[m].value==x)
				{
					cout<<ar[m].scount<<endl;
					break;
				}
				else if(ar[m].value>x)
				{
					r=m-1;	
				}
				else 
				{
					l=m+1;
				}
			}
		}
	}
}
