#include<iostream>
using namespace std;

int main()
{
	for(;;) {
		int n ,m;
		int essay[n+1], d, u;
		bool two = false;
		cin >> n >> m;
		if(n == 0 && m == 0)
			return 0;
		for(int i=0;i<m;i++) {
			cin >> d >> u;
			essay[d] = u;
		}
		for(int i=1;i<=n;i++) {
			if(essay[essay[i]] < i) {
				cout << 0 << endl;
				break;
			} else {
				for(int j=i+1;j<n;j++) {
					if(essay[j] == essay[i]) {
						two = true;
						break;
					} else
						two = false;
				}
			}
		}
		if(two)
			cout << 2 << endl;
		else if(!two)
			cout << 1 << endl;
	}
return 0;
}
