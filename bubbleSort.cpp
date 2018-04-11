#include<bits/stdc++.h>
#include<vector>
#define lli long long int
using namespace std;
lli pass=0,swaps=0,comp=0;
void bubbleSort(lli ar[], lli l,lli r,lli n)
{
	if(l==r)
	{
		//for(lli i=0;i<n;i++)
		//cout<<ar[i]<<" ";
		return;
	}
	else
	{
		for(lli i=0;i<r-1;i++)
		{
			comp++;
			if(ar[i]>ar[i+1])
			{
				swap(ar[i],ar[i+1]);
				swaps++;
			}
			
		}pass++;
		bubbleSort(ar,l,r-1,n);
	}
}

int main()
{
	int x;
	cin>>x;
	lli n=0;
	while(x--)
	{	cout<<endl<<endl;
		n=n+200;
		lli ar[n];
    
    for(lli i=0;i<n;i++)
    ar[i]=rand()%100000+10;
    //cin>>ar[i];
    
    bubbleSort(ar,0,n,n);
    cout<<"\n"<<"Array Size= "<<n;
    cout<<"\n"<<"No. of passes= "<<pass;
    cout<<"\n"<<"No. of swaps= "<<swaps;
    cout<<"\n"<<"No. of comparisons= "<<comp;
    pass=0;swaps=0;comp=0;
	}
	
	
    
}

