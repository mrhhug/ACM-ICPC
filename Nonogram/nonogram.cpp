#include<iostream>
using namespace std;

int main()
{
	int n, i , j, count;
	cin >> n;

	char a[n+1][n+1];

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
	for(i=0;i<n;i++) {
		count = 0;
		for(j=0;j<n;j++) {
			if(a[i][j] == 'X')
				count++;
			else {
				if(count > 0) {
					cout << count << endl;
					break;
				}
			}
			cout << endl;
		}
	}
return 0;
}
