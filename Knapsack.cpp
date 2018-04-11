#include<bits/stdc++.h>
using namespace std;
 
int knapSack(int W, int wt[], int cost[], int n)
{
   int i, w;
   int dp[n+1][W+1];
 
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               dp[i][w] = 0;
           else if (wt[i-1] <= w)
           {
          	 dp[i][w] = max(cost[i-1] + dp[i-1][w-wt[i-1]],  dp[i-1][w]);
		   }                
           else
           dp[i][w] = dp[i-1][w];
       }
   }
 
   return dp[n][W];
}
 
int main()
{
	int n;
	cin>>n;
    int cost[n], wt[n], W ;
    for(int  i=0;i<n;i++)
    {
    	cin>>cost[i];
    	cin>>wt[i];
	}
	cin>>W;
    cout<<"Max Value= "<<knapSack(W, wt, cost, n);
    return 0;
}
