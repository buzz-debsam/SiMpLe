#include<bits/stdc++.h>
using namespace std;

int partition(int ar[], int l, int r)
{
	int p=ar[r];
	int i=l-1;
	for(int j=l;j<=r-1;j++)
	{
		if(ar[j]<=p)
		{
			i++;
		    swap(ar[i],ar[j]);
		}
		
		
	}
	swap(ar[i+1],ar[r]);
	return i+1;
}
int quickselect(int ar[], int l, int r,int k)
{
    if(k>0 && k<=r-l+1)
    {
    	int x=partition(ar,l,r);
    	if(x-l==k-1)
    	return ar[x];
    	
    	else if(x-l>k-1)
    	return quickselect(ar,l,x-1,k);
    	
    	else return quickselect(ar,x+1,r,k-x+l-1);
    	
	}
}
int main()
{
	int ar[20],n,k=4;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>ar[i];
	
	int x=quickselect(ar,0,n-1,k);
	cout<<x;
	
}

