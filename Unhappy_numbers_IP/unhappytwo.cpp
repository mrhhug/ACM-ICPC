#include<iostream>
using namespace std;

typedef unsigned long long ull;

ull gen_happy(ull n)
{
	ull ans = 0;
	while(n > 0) {
		ans += (n%10) * (n%10);		
		n /= 10;
	}
return ans;
}

ull reverse(ull n)
{
	ull ans = 0;
	while(n > 0) {
		ans = (n%10) * 10;
		n /= 10;
	}
return ans;
}

ull dp(bool store[], ull lo, ull hi)
{
	ull count = 0;

	for(int i=lo;i<=hi;i++) {
		if(store[i])
			count++;
		else {
			int start = i, inc = next_happy(i);
			while(inc != start) {
				if(inc == 1)
					continue;
				inc = next_happy(inc);
	}
return count;
}
int main()
{
	while(true) {
		ull lo, hi;
		cin >> lo >> hi;
		if(lo == 0 && hi == 0)
			break;
		bool store[hi];
		for(int i=0;i<hi/*-lo+1*/;i++)
			store[i] = false;
		cout << dp(store, lo, hi) << endl;
	}
return 0;
}
