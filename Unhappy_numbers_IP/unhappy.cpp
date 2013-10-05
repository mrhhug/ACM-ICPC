#include "Bigint.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

using namespace std;

string zero = "0";
string one = "1";
Bigint hi;
Bigint lo;
Bigint bigzero = zero; 
Bigint bigone = one;
Bigint maincount;

Bigint square(char num)
{
	int n = num-'0';
	n = n*n;
	Bigint returnval;
	returnval = to_string(n);
	return returnval;
}
Bigint pullapartnum(Bigint num)
{
	string oldstring = num.to_string();
	Bigint newstring = zero;
	for (int i =0 ;i<num.size();i++)
	{
		newstring=newstring + square(oldstring.at(i));
	}
	return newstring;
}
bool checkhappy (Bigint num)
{
	string MAXDEPTH = "5";
	Bigint bigmax = MAXDEPTH;
	string count ="1";
	Bigint bigcount = count;
	//cout << num.to_string() << endl;
	while (bigone < num)
	{
		if (num < bigmax)
		{
			//maincounter = maincounter+bigone;
			return false;
		}
		num = pullapartnum(num);
		//cout << num.to_string() << endl;
	}
	return true;
}
void takeinput()
{
	string cin0;
	cin >> cin0;
	lo=cin0;
	string cin1;
	cin >> cin1;
	hi=cin1;
}
int main ()
{
	string str = "134";
	Bigint number = str;
	cout << checkhappy(number) << endl;
	while (false)
	{
		maincount = bigzero;
		takeinput();
		if (hi == bigzero && lo == bigzero)
		{
			break;
		}
		for ( ; lo<hi+bigone;lo=lo+bigone)
		{
			checkhappy(lo);
		}
		cout << maincount.to_string() << endl;
	}
	//cout << count << endl;
	//cout << str << endl;
}
