#include<iostream>
#include<vector>
using namespace std;

long int power(int a, int n)
{
	if(n==0)
	return 1;
    long int temp=power(a,n/2);
    if(n%2==0)
	return temp*temp;
	else return a*temp*temp;
}


int main()
{
	int a;
	cin>>a;
	int n;
	cin>>n;
	long int p=power(a,n);
	cout<<p<<endl;
	return 0;
}

