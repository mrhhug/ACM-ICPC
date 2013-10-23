#include<iostream>
#include<cstdio>
using namespace std;
typedef unsigned long ull;

ull max(ull a, ull b) {return a>b?a:b; }


	/*for(int i=0;i<=n;i++)
       	{
		for(int j=0;j<=W;j++)
	       	{
			if(i==0 || j==0)
				K[i][j] = 0;
			else if(wt[i-1] <= j)
				K[i][j] = max(val[i-1] + K[i-1][j-(wt[i-1])], K[i-1][j]);
=======*/
ull knapsack(ull value[], ull weight[], ull C, ull n)
{
	ull M[n+1][C+1];
	for(ull j=0;j<=n;j++) {
		for(ull i=0;i<=C;i++)
			M[j][i] = 0;
	}

	for(ull j=0;j<=n;j++) {
		for(ull i=0;i<=C;i++) {
			if(j > 0) {
				M[j][i] = M[j-1][i];
				if (weight[j] <= i)
		  			M[j][i] = max(M[j][i], M[j-1][i-weight[j]]+value[j]);
			}
			else {
				//M[j][i] = 0;
				if(weight[j] <= i)
					M[j][i] = max(M[j][i], value[j]);
			}
		}
	}
return M[n-1][C];
}
int main()
{
	while(true)
       	{
		ull n;
		double m;
		cin >> n >> m;
		ull m_ull = (ull)(m*100);
		if(n == 0 && m == 0)
			return 0;
		ull c[n], p[n], dollar[n], cent[n];
	
		for(int i=0;i<n;i++) {
			scanf("%d %d.%d", &c[i], &dollar[i], &cent[i]);
			p[i] = (dollar[i] * 100) + cent[i];
		}
		cout << knapsack(c, p, m_ull, n) << endl;
	}
return 0;
}
