#include<iostream>
#include <string>

using namespace std;

int max(int a, int b) { return a>b?a:b; }

int lcs(const char X[],const char Y[], int m, int n)
{
	if (m == 0 || n == 0)
     		return 0;
  	if (X[m-1] == Y[n-1])
	        return 1 + lcs(X, Y, m-1, n-1);
      	else
		return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int main()
{
	string str ="ABABABcABABAbAbAb";
	int first =0;
	int second =2;
	cout << lcs(str.substr(first,str.size()).c_str(), str.substr(second,str.size()).c_str(), str.size()-first, str.size()-second) << endl;
/*	while(false) {
		char s[100000], x[100000], y[100000];
		cin >> s;
		if(s == "*")
			return 0;
		//cout << "Strlen: " << strlen(s) << endl;
		int q;
		cin >> q;
		while(q--) {
			int i, j, h;
			cin >> i >> j;
			for(int k=i, h=0;k<strlen(s);k++, h++)
				x[h] = s[k];
			for(int k=j, h=0;k<strlen(s);k++, h++)
				y[h] = s[k];
			//cout << "y: " << y << endl;
			//cout << "x: " << x << endl;
			cout << lcs(x, y, strlen(x), strlen(y)) << endl;
		}
	}*/

return 0;
}
