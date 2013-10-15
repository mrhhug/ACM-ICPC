#include<iostream>

using namespace std;

#define ABS(x) x>0?x:x*-1;

int main()
{
	int n, f, v, ans = 0;
	cin >> n;

	for(int i=0;i<n;i++) {
		cin >> f;
		for(int j=0;j<f;j++) {
			cin >> v;
			double x[v], y[v], z[v];
			for(int k=0;k<v;k++)
				cin >> x[k] >> y[k] >> z[k];

