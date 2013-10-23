#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long ul;
double abv(double a) { return a > 0 ? a : -a; }

int main()
{
	for(;;) {
		double t[2][2], x[2][2], y[2][2], s[2][2];

		for(int i=0;i<2;i++) {
			for(int j=0;j<2;j++) {
				cin >> t[i][j] >> x[i][j] >> y[i][j] >> s[i][j];
				if(t[0][0] == -1)
					return 0;
			}
		}
		double degree1 = asin(abs(y[0][1] - y[0][0])/abs(x[0][1]-x[0][0]));
		double degree2 = asin(abs(y[1][1] - y[1][0])/abs(x[1][1]-x[1][0]));

		double acc1 = (abs(s[0][1] - s[0][0]) / abs(t[0][1] - t[0][0]));
		double acc2 = (abs(s[1][1] - s[1][0]) / abs(t[1][1] - t[1][0]));


	}
return 0;
}
