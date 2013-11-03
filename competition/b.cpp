#include<iostream>
using namespace std;
typedef unsigned long long ull;

ull mem[1000001] = {0};
ull memoiz(ull n)
{
	if (n==1)
	{
		return 1;
	}
	ull ans = 0;
	if(mem[n] != 0) {
		return mem[n];
	} else {
		mem[n] = mem[n-1] + ans;
	}
return mem[n];
}

int main()
{
	for(int i=1;i<=1000000;i++)
		memoiz(i);

	while(true) {
		ull n;
		cin >> n;
		if(n == 0)
			return 0;
		else
			cout << mem[n] << endl;
	}
	
return 0;
}
