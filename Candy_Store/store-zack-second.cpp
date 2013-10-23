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
	ull best[10001] = {0};
	ull ans = 0, last = -1;
	ull fattest = 0;

	for(int i=0;i<C;i++) {
		if(best[i] > last)
			last = best[i];
		for(int j=0;j<n;j++) {
			ull target = i+weight[j];
			ull fatness = best[i]+value[j];
			if(target <= C && fatness > best[target]) {
				best[target] = fatness;
				if(fatness > ans)
					ans = fatness;
			}
		}
	}
return ans;
}
int main()
{
	while(true)
       	{
		ull n;
		double m;
		cin >> n >> m;
		ull m_ull = (ull)(m*100);
		m_ull++;
		if(n == 0 && m == 0)
			return 0;
		ull c[5000], p[5000], dollar[5000], cent[5000];
	
		for(int i=0;i<n;i++) {
			scanf("%d %d.%d", &c[i], &dollar[i], &cent[i]);
			p[i] = (dollar[i] * 100) + cent[i];
		}
		cout << knapsack(c, p, m_ull, n) << endl;
	}
return 0;
}
