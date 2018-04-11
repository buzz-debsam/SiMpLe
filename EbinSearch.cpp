#include<bits/stdc++.h>
using namespace std;

int binSearch(vector <int> ar, int n, int l, int r, int x)
{
	if(l==r)
	{
		if(ar[l]==x)
		{
			return l;
		}
		else
		{
			if(x<ar[0])
			return 0;
			else return n-1;
		}
		
	}
	else
	{
		int mid=(l+r)/2;
		if(x==ar[mid]|| (x>ar[mid]&& x<ar[mid+1]) || (x<ar[mid]&& x>ar[mid-1]) )
		{
			return mid;
		}
		else if(x>ar[mid])
		{
			return binSearch(ar,n,mid+1,r,x);
		}
		else
		{
		return binSearch(ar,n,l,mid-1,x);
		}
	}	
	
	
}

int main()
{
	int n;
	cin>>n;
	vector <int> ar(n);
	for(int i=0;i<n;i++)
	{
		ar[i]=rand()%100+10;
	}
	sort(ar.begin(),ar.end());
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	int L,U;
	cin>>L>>U;
	int li=binSearch(ar,n,0,n-1,L);
	int ui=binSearch(ar,n,0,n-1,U);
	if(ar[li]<L)
	{
		++li;
	}
	if(ar[ui]>U)
	{
		--ui;
	}
	for(int i=li;i<=ui;i++)
	cout<<ar[i]<<" ";
	
}

