#include<bits/stdc++.h>
#define N 10
using namespace std;
void findCofactor(int ar[N][N],int x[N][N],int r,int c, int n)
{
	int i=0,j=0;
	
	for(int rw=0;rw<n;rw++)
	{
		for(int cl=0;cl<n;cl++)
		{
			if(rw!=r&&cl!=c)
			x[i][j++]=ar[rw][cl];
			
			if(j==n-1)
			{
				j=0;
				i++;
			}
		}
	}
}

int calcDet(int ar[N][N], int n)
{
	if(n==1)
	return ar[0][0];
	
	int d=0;
	int sign=1;	
	int temp[N][N];
	
	for(int i=0;i<n;i++)
	{
		findCofactor(ar,temp,0,i,n);
		d+=sign*ar[0][i]*calcDet(temp,n-1);
		sign=-sign;
	}
	return d;
	
}

int main()
{
	int n=N;
	int ar[N][N];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	ar[i][j]=rand()%50+10;
	
	for(int i=0;i<n;i++)
    {
     	for(int j=0;j<n;j++)
	   {
		   cout<<ar[i][j]<<"   ";
	   }   
	   cout<<endl;
	}
	int det=calcDet(ar,n);
	cout<<det;
	return 0;
	
}

