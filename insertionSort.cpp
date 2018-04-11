#include<bits/stdc++.h>
#include<vector>
#define lli long long int
using namespace std;
lli pass=0,swaps=0,comp=0;
void insertionSort(lli ar[],lli l,lli r)
{
    if(l==r-1)
	{
		/*for(lli i=0;i<r;i++)
		cout<<ar[i]<<" ";*/
		return;
	}
	else
	{
		int target=l+1;
		for(lli i=0;i<=l;i++)
		{
			
			comp+=2;
			if(ar[l+1]<ar[i]&& ar[i-1]<=ar[l+1])
			{
				target=i;
				break;
			}
			
		}
		pass++;
		int temp=ar[l+1];
		for(lli i=l;i>=target;i--)
		{
			swaps++;
			ar[i+1]=ar[i];
		}
		swaps++;
		ar[target]=temp;
		insertionSort(ar,l+1,r);
	}
}

int main()
{
	int x;
	cin>>x;
	lli n=0;
	while(x--)
	{
		cout<<endl<<endl;
		n=n+200;
    lli ar[n];
    
    for(lli i=0;i<n;i++)
    ar[i]=rand()%100000+10;
    //cin>>ar[i];
    
    insertionSort(ar,0,n);
    cout<<"\n"<<"Array Size= "<<n;
    cout<<"\n"<<"No. of passes= "<<pass;
    cout<<"\n"<<"No. of swaps= "<<swaps;
    cout<<"\n"<<"No. of comparisons= "<<comp;
    pass=0;swaps=0;comp=0;
	}
	
}

