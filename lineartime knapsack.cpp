#include<bits/stdc++.h>
#define RANGE 500
using namespace std;

struct item
{
	float weight;
	float price;
	int ratio;	
};
vector <item> sorted;
void countSort(vector <item> it)
{
 
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
 
    for(i = 0; it.size(); ++i)
        ++count[it[i].ratio];
 
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];
 
    for (i = 0; i<it.size(); ++i)
    {
        sorted[count[it[i].ratio]].weight = it[i].weight;
        sorted[count[it[i].ratio]].price = it[i].price;
        --count[it[i].ratio];
    }
 
    for (i = 0; i<it.size(); ++i)
    {
    	 it[i].weight=sorted[i].weight;
         it[i].price=sorted[i].price;
	}
        
     for (i = 0; i<it.size(); ++i)
    {
    	 cout<<it[i].weight<<"  "<<it[i].price<<endl;
	}     
}

float fKnapsack(vector <item> it, int capacity, int n)
{
	vector <float> ratio;
	float fvalue=0,residue=capacity;
	
	
	countSort(it);
	
	for(int i=n-1;i>=0;i--)
	{
		if(it[i].weight<capacity)
		{
			capacity-=it[i].weight;
			fvalue+=it[i].price;
		}
		else
		{
			fvalue+=capacity/it[i].weight*it[i].price;
			break;
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
		it[i].ratio=it[i].price/it[i].weight;
	}
	
	float maxval=fKnapsack(it,capacity,n);
	cout<<"Max Knapsack value = "<<maxval;
	return 0;

}

