#include<iostream>
using namespace std;

int max(int a, int b) {return a>b?a:b; }

int knapsack(int W, int wt[], int val[], int n)
{
	int K[n+1][W+1];

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
	int t;
	cin >> t;
	while(t--) {
		int n, w;
		cin >> n >> w;
		int  c[n], p[n], t[n], weight[n];
		for(int i=0;i<n;i++) {
			cin >> c[i] >> p[i] >> t[i];
			weight[i] = c[i] * p[i];
		}

		cout << knapsack(w, t, weight, n) << endl;
	}
return 0;
}
