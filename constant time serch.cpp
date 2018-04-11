#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   vector <int> ar (n);
   for(int i=0;i<n;i++)
   {
   	cin>>ar[i];
   	sum+=ar[i];
   }
   int avg=sum/n;
   vector <int> x[avg];
   
   for(int i=0;i<n;i++)
   {
   	x[ar[i]%avg].push_back(ar[i]/avg);
   }
   int m;
   cin>>m;
   int flag=1;
   if(x[m%avg].size())
   {
   	
   	for(int i=0;i<x[m%avg].size();i++)
   	if(m/avg==x[m%avg][i])
   	{
   		cout<<"Search Successful"<<endl;
   		flag=0;
   		break;
   		
	   }
   	
   }
   else cout<<"Not Found"<<endl;
   if(flag==1)
   cout<<"Not Found"<<endl;
   return 0;
}

