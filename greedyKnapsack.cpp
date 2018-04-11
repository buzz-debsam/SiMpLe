#include<bits/stdc++.h>
using namespace std;
struct item
{
	float weight;
	float price;	
};
bool comp(struct item a,struct item b)
	{
		float rat1=a.price/a.weight;
		float rat2=b.price/b.weight;
		return rat1>rat2;
	}
float fKnapsack(vector <item> it, int capacity, int n)
{
	vector <float> ratio;
	float fvalue=0,residue=capacity;
	
	
	sort(it.begin(),it.end(),comp);
	
	for(int i=0;i<n;i++)
	{
		if(it[i].weight<capacity)
		{
			capacity-=it[i].weight;
			fvalue+=it[i].price;
		}
	}
	return fvalue;
}
int main()
{
	int n,capacity;
	cin>>n>>capacity;
	vector <item> it(n);
	for(int i=0;i<n;i++)
	{
		cin>>it[i].weight>>it[i].price;
	}
	
	float maxval=fKnapsack(it,capacity,n);
	cout<<"Max Knapsack value = "<<maxval;
	return 0;

}

