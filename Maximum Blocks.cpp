#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	vector <int> ar(n);
 	for(int i=0;i<n;i++)
 	cin>>ar[i];
 	int count=0;
 	int j=n-1;
 	int ma=ar[n-1];
 	while(j!=-1)
 	{
		if(j==n-ma)
		{
			count++;
		}
		j--;
		ma=max(ma,ar[j]);
	}
	cout<<count<<endl;;

 }
