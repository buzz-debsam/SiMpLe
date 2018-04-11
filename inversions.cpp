#include<bits/stdc++.h>
using namespace std;
int inv=0;

int partition(int ar[], int l, int r)
{
	int p=ar[r];
	int i=l-1;
	for(int j=l;j<=r-1;j++)
	{
		if(ar[j]>=p)
		{
			i++;
		    swap(ar[i],ar[j]);
		    inv++;
		    
		}
		
		
	}
	swap(ar[i+1],ar[r]);
	inv++;
	return i+1;
}
void quicksort(int ar[], int l, int r)
{
	if(l<r)
    {
    	int x=partition(ar,l,r);    	
        //quicksort(ar,l,x-1);    	
        //quicksort(ar,x+1,r);
    	
	}
}
int main()
{
	int ar[20],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>ar[i];
	
	quicksort(ar,0,n-1);
	cout<<inv;
	
}
