#include<iostream>

using namespace std;

typedef unsigned long long ull;

ull next_happy(ull x)
{
	ull ans = 0;
	while(x > 0) {
		ans += (x%10) * (x%10);
		x /= 10;
	}
return ans;
}
void gen(bool store[], ull input)
{
	if(input > 1e18)
		return;
	

	ull output = next_happy(input);
	if(output == 1) {
		return gen(store, input+1);
	}
}
int main()
{
	bool happy[100000000000000000] = {true};
	gen(happy, 0);
return 0;
}
