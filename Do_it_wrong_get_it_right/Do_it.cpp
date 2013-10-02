#include <iostream>

using namespace std;
typedef long long ll;

ll b, n;

ll max(ll a, ll b) { return a>b?a:b; }

bool isprime(ll x)
{
	for(int i=2;i<x;i++) {
		if(x % i == 0)
			return false;
	}
return true;
}

ll numerator(ll m)
{
	return -((b*m*(m-2*n)/(n*n)));
}
			
ll factor()
{
	ll ans;
	if(isprime(b) || isprime(n))
		return 1;

	for (ll i=2;i<max(b,n);i++)
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
		ll fac = factor();
		ll denom = 2*n;
		//cout << fac <<endl;
		while (denom >= fac)
		{
			if (denom != n)
			{
			cout << numerator(denom) << "/" << denom << " ";
			}

			if(fac == 1)
			{
				denom -= n;
			}
			else
			{
				denom -= fac;
			}
		}
		cout << endl;
	}
}
