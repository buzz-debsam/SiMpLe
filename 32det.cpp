#include<bits/stdc++.h>
#define N 8

using namespace std;
float det(float ar[N][N], int n)
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
	int n=N;
	float ar[N][N];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	ar[i][j]=rand()%20+1;
	
	for(int i=0;i<n;i++)
    {
     	for(int j=0;j<n;j++)
	   {
		   cout<<ar[i][j]<<"   ";
	   }   
	   cout<<endl;
	}
	int detr=det(ar,n);
	cout<<detr;
	return 0;	
	
}

