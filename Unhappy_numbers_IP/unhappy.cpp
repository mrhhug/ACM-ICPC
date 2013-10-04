#include "Bigint.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

string zero = "0";
Bigint hi;
Bigint lo;
Bigint bigzero = zero;



string square(string num)
{
	int n = atoi(num.c_str());
	n = n*n;
	//char *intStr = itoa(n);
	return to_string(n);
}
string pullapartnum(Bigint num)
{
	//cout << num << endl;
	string oldstring = num.to_string();
	string newstring = "";
	for (int i =0 ;i<num.size();i++)
	{
		newstring+=square(oldstring.at(i));
	}
	return newstring;
}
/*
int checkhappy (string num)
{
	string count ="1";
	string max = "19";
	while (num!="1" && count != max )
	{
		num = pullapartnum(num);
		count=incrament(count);
	}
	if (count == max)
	{
		return 0;
	}
	else return 1;
}
*/

void takeinput()
{
	string num;
	cin >> num;
	hi=num;
	cin >> num;
	lo=num;
}

int main ()
{
	while (false)
	{
		takeinput();
		if (lo == bigzero && hi == bigzero)
		{
			break;
		}
	}
	//cout << count << endl;
	//cout << str << endl;
}
