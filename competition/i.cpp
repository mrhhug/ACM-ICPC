#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
typedef unsigned long long ull;

double hours, mini, sec;
void print (double n)
{
	hours=0;
	mini=0;
	sec=0;
	while (n>=60)
	{
		if (n>=60)
		{
			n-=60;
			mini++;

			if (mini>=60)
			{
				mini=0;
				hours++;
			}
		}
	}
	sec = n;
}
int main()
{
	while(true) {
		double d, s1, s2;
		cin >> d >> s1 >> s2;
		if(d == 0 && s1 == 0 && s2 == 0)
			return 0;
		double ans = abs((d/s1) - (d/s2));
		double n = (round(ans * 3600));
		print(n);
		
		printf("%0.0f:", hours);
		if(mini < 10)
			printf("0%0.0f:", mini);
		else
			printf("%0.0f:", mini);
		if(sec < 10)
			printf("0%0.0f\n", sec);
		else
			printf("%0.0f\n", sec);
	}
return 0;
}
