#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
	vector <int> ar(n);
	for(int i=0;i<n;i++)
	cin>>ar[i];
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(ar[i]==x)
		{
			cout<<"Number is in position: "<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"Not found"<<endl;
	
	return 0;
}

