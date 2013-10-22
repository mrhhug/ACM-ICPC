#include<iostream>
using namespace std;

int max(int a, int b) {return a>b?a:b; }

int knapsack(int W, int wt[], int val[], int n)
{
	int K[n+1][W+1];

	for(int i=0;i<=n;i++)
       	{
		for(int j=0;j<=W;j++)
	       	{
			if(i==0 || j==0)
				K[i][j] = 0;
			else if(wt[i-1] <= j)
				K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]], K[i-1][j]);
			else
				K[i][j] = K[i-1][j];
		}
	}
return K[n][W];
}
//test
int main()
{
	while(true)
       	{
		int m;
		int n;
		double mm,cc,pp;
		cin >> n >> mm;
		m=mm*100;
		if(n == 0 && m == 0)
			return 0;
		int c[n];
       		int p[n];
		for(int i=0;i<n;i++)
		{
			cin >> cc >> pp;
			c[i]=cc*100;
			p[i]=pp*100;
			//cin >> c[i] >> p[i];
		}
		cout << knapsack(m, c, p, n) << endl;
	}
return 0;
}
