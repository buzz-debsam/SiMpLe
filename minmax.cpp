#include<bits/stdc++.h>
using namespace std;
int minm(vector <int> ar, int l, int r)
{
	if(r-l==1 || r==l)
	{
		if(r==l)
			return ar[l];
		else
		    return min(ar[l],ar[r]);
	}
	else
	{
		int mid=(l+r)/2;
		int m1=minm(ar,l,mid);
		int m2=minm(ar,mid+1,r);
		return min(m1,m2);
	}
}
int maxm(vector <int> ar, int l, int r)
{
	if(r-l==1 || r==l)
	{
		if(r==l)
			return ar[l];
		else
		    return max(ar[l],ar[r]);
	}
	else
	{
		int mid=(l+r)/2;
		int m1=maxm(ar,l,mid);
		int m2=maxm(ar,mid+1,r);
		return max(m1,m2);
	}
}

void minMax(vector <int> ar,int n)
{
	int mini=minm(ar,0,n-1);
	cout<<mini<<endl;
	int maxi=maxm(ar,0,n-1);
	cout<<maxi<<endl;
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
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	minMax(ar,n);

}

