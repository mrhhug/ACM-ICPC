#include<iostream>
using namespace std;

int main()
{
	for(;;) {
		int n ,m, ans = 1;
		cin >> n >> m;
		int d, u, essay[n], point[n];
		if(n == 0 && m == 0)
			return 0;
		for(int i=0;i<n;i++) {
			essay[i] = 0;
			point[i] = 0;
		}

		for(int i=0;i<m;i++) {
			cin >> d >> u;
			essay[u-1]++;
			point[u-1] = d;
		}

		/*for(int i=1;i<=n;i++) {
			essay[point[i]]--;
		}*/

		for(int i=0;i<n;i++) {
			if(essay[point[i]-1] < 1) {
				ans = 0;
				cout << ans << endl;
				return 0;
			} else if(essay[point[i]-1] > 1)
				ans = 2;
		}
		cout << ans << endl;
	}
return 0;
}
