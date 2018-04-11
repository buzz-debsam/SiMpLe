#include<bits/stdc++.h>
using namespace std;

int fibon(int n)
{
	if(n<=1)
	return n;
	else 
	{
		int fib=fibon(n-1)+fibon(n-2);;
		return fib;
	}
}

int main()
{
	int n;
	cin>>n;
	vector <int> fi(n+1);
	int fib=fibon(n);
	cout<<fib<<endl;
	
}

