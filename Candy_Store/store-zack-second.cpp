#include<iostream>
#include<cstdio>
using namespace std;
typedef unsigned long ull;

ull max(ull a, ull b) {return a>b?a:b; }

ull knapsack(ull value[], ull weight[], ull C, ull n)
{
	ull best[10001] = {0};
	ull ans = 0;

	for(ull i=0;i<C;i++) {
		for(ull j=0;j<n;j++) {
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
	
		for(ull i=0;i<n;i++) {
			scanf("%ld %ld.%ld", &c[i], &dollar[i], &cent[i]);
			p[i] = (dollar[i] * 100) + cent[i];
		}
		cout << knapsack(c, p, m_ull, n) << endl;
	}
return 0;
}
