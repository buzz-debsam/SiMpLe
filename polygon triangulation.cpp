#include<bits/stdc++.h>
#define MAX 1000000.0
using namespace std;

struct Point{
    int x, y;
};

double min(double x, double y)
{
    return (x <= y)? x : y;
}
 
double dist(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

double cost(Point points[], int i, int j, int k)
{
    Point p1 = points[i], p2 = points[j], p3 = points[k];
    return dist(p1, p2) + dist(p2, p3) + dist(p3, p1);
}

double triangulate(Point points[], int n)
{
   if (n < 3)
      return 0;
 
   double table[n][n];
 
   for (int gap = 0; gap < n; gap++)
   {
      for (int i = 0, j = gap; j < n; i++, j++)
      {
          if (j < i+2)
             table[i][j] = 0.0;
          else
          {
              table[i][j] = MAX;
              for (int k = i+1; k < j; k++)
              {
                double val = table[i][k] + table[k][j] + cost(points,i,j,k);
                if (table[i][j] > val)
                     table[i][j] = val;
              }
          }
      }
   }
   return  table[0][n-1];
}
 
int main()
{
	int n;
	cin>>n;
    Point points[n];
    for(int i=0;i<n;i++)
    cin>>points[i].x>>points[i].y;
    cout << triangulate(points, n);
    return 0;
}

