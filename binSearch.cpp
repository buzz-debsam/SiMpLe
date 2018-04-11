#include<bits/stdc++.h>
using namespace std;

void binSearch(vector <int> ar, int l, int r, int x)
{
	if(l==r)
	{
		if(ar[l]==x)
		{
			cout<<"Element is at index "<<l<<endl;
			return;
		}
		else
		{
			cout<<"Not found";
			return;
		}
		
	}
	else
	{
		int mid=(l+r)/2;
		if(x==ar[mid])
		{
			cout<<"Element is at index "<<mid<<endl;
			return;
		}
		else if(x>ar[mid])
		{
			l=mid+1;
			binSearch(ar,l,r,x);
		}
		else
		{
			r=mid-1;
			binSearch(ar,l,r,x);
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
	int x;
	cin>>x;
	binSearch(ar,0,n-1,x);
	
}

