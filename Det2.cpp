#include<bits/stdc++.h>
using namespace std;
float det(float ar[4][4], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			float m=ar[k][i]/ar[i][i];
			for(int l=i;l<n;l++)
			ar[k][l]-=m*ar[i][l];
		}
	}
	float d=1;
	for(int i=0;i<n;i++)
	d=d*ar[i][i];
	return d;
}

int main()
{
	int n;
	cin>>n;
	float ar[4][4];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>ar[i][j];
	int detr=det(ar,n);
	cout<<detr;
	return 0;	
	
}

