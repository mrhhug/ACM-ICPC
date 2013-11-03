#include<iostream>
using namespace std;
typedef unsigned long long ull;

int even;

int main()
{
	while(true) {
		int t;
		cin >> t;
		if(t == 0)
			return 0;
		string s[t];

		for(int i=0;i<t;i++)
			cin >> s[i];
	/*	for(int i=0;i<t;i++) {
			if(i % 2 == 0 && i != 0)
				cout << s[i-1] << endl;
			else
				cout << s[i] << endl;
		}*/
		if(t%2==0)
		{
			even = 0;
		}
		else
		{
			even = 1;
			t--;
		}
		int half = t/2;

int i;
		for (i=0;i<half;i++)
		{
			cout << s[i] << endl;
			cout << s[i+half+even] << endl;
		}
		if (even >0)
		{
		i++;
			cout << s[t-half] << endl;
			}
	}
return 0;
}
