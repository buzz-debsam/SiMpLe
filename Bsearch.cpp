#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> ar, int l, int r, int x)
{
	if(r>=l)
	{
	int mid=(l+r)/2;
	
	if(ar[mid]==x)
	return mid;
	
	else if(ar[mid]>x)
	return binarySearch(ar,l,mid-1,x);
	
	else if(ar[mid]<x)
	return binarySearch(ar,mid+1,r,x);
	}
	
	
	return -1;
	
	
}

int main()
{
	int n;
	cin>>n;
	vector <int> ar(n);
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sort(ar.begin(),ar.end());
	int x;
	cin>>x;
	
	int in=binarySearch(ar,0,n-1,x);
	if(in==-1)
	cout<<"Number not found"<<endl;
	else
	cout<<"Position of the required number: "<<in+1<<endl;
}

