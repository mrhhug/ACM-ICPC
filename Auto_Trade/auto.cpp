#include<iostream>
using namespace std;

int max(int a, int b) { return a>b?a:b; }
int min(int a, int b) { return a<b?a:b; }
int abs(int a) { return a>0?a:-a; }
int abs(int a) { return a>0?a:-a; }
int lcs(char x[], char y[], int m, int n)
{
	int l[m+1][n+1];

	for(int k=0;k<min(strlen(x),strlen(y);k++) {
		for(int i=0;i<=m;i++) {
			for(int j=0;j<=n;j++) {
				if(i == 0 || j == 0)
					l[i][j] = 0;
				else if(x[i-1] == y[j-1])
					l[i][j] = l[i-1][j-1] + 1;
				else
					l[i][j] = max(l[i-1][j], l[i][j-1]);
			}
		}
	}
return l[m][n];
}
int strlen(char s[])
{
	int i = 0;
	while(*(s+i))
		i++;
return i;
}
int main()
{
	//char a[5] = "ABAB", b[5] = "ABAB";
	//cout << lcs(a, b, strlen(a), strlen(b)) << endl;
	while(true) {
		char s[100000];
		cin >> s;
		if(s[0] == '*')
			return 0;
		//cout << "Strlen: " << strlen(s) << endl;

		int q;
		cin >> q;
		while(q--) {
			char x[100000], y[100000];
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
	}

return 0;
}
