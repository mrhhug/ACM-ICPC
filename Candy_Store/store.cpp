#include<iostream>
using namespace std;

double max(double a, double b) {return a>b?a:b; }

double knapsack(int W, int wt[], double val[], int n)
{
	double K[n+1][W+1];

	for(int i=0;i<=n;i++) {
		for(int j=0;j<=W;j++) {
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

int main()
{
	while(true) {
		double m;
		int n;
		cin >> n >> m;
		if(n == 0 && m == 0.00)
			return 0;
		int c[n];
       		double p[n];
		for(int i=0;i<n;i++)
		{
			cin >> c[i] >> p[i];
		}
		cout << knapsack(m, c, p, n) << endl;
	}
return 0;
}
