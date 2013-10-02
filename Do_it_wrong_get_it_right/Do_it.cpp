#include <iostream>

using namespace std;

#define MIN(a,b) a<b?a:b
int b, n;

int numerator(int m)
{
	return -((b*m*(m-2*n)/(n*n)));
}
			
int factor()
{
	int ans;
	for (int i =2 ;i<MIN(b,n);i++)
	{
		if(b%i==0 && n%i==0)
		{
			ans = n/i;
			break;
		}
		else
			ans = 1;
	}
	return ans;
}

void takeinput()
{
	cin >> b;
	cin >> n;
}

int main ()
{
	while(true)
	{
		takeinput();
		if (b == 0 && n == 0)
		{
			break;
		}
		int fac = factor();
		int denom = 2*n;
		//cout << denom <<endl;
		while (denom >= fac)
		{
			if (denom != n)
			{
			cout << numerator(denom) << "/" << denom << " ";
			}
			denom -= fac;
		}
		cout << endl;
	}
}
