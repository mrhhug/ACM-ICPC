#include <algorithm>
#include <string>
#include <iostream>
#include <thread>
#include <sstream>

using namespace std;

unsigned long long hi,lo=1;
unsigned long long maincount;
const unsigned long long maxarray = 2000;
bool boolarray[maxarray];

void incramentmaincount()
{
	maincount++;
}
unsigned long long square(char num)
{
	int n = num-'0';
	return n*n;
}
int long pullapartnum(unsigned long long num)
{
	stringstream ss;
	ss << num;
	string input = ss.str();
	unsigned long long newstring = 0;
	for (int i =0 ;i<input.size();i++)
	{
		newstring=newstring + square(input.at(i));
	}
	return newstring;
}
bool checkhappy (unsigned long long num)
{
	int MAXDEPTH = 15;
	int count =0;
	unsigned long long inputnumber = num;
	while (num > 1)
	{
		if (MAXDEPTH < count)
		{
			return false;
			//incramentmaincount();
			//return;
		}
		num = pullapartnum(num);
		count++;
	}
	return true;
	//return;
}
void takeinput()
{
	string cinhi,cinlo;
	cin >> cinlo;
	cin >> cinhi;
	hi = strtoull(cinhi.c_str(),NULL, 10);
	lo = strtoull(cinlo.c_str(),NULL, 10);
}

void createArray()
{
	for (int i=1;i<maxarray;i++)
	{
		boolarray[i]=checkhappy(i);
	}
}
int main ()
{
	unsigned long long count=0;
	createArray();

	while (true)
	{
		takeinput();
		if(lo ==0 && hi ==0)
		{
			break;
		}
		unsigned long long curnum;
		for ( ; lo<=hi;lo++)
		{
			curnum = lo;
			while(curnum>maxarray)
			{
				curnum=pullapartnum(curnum);
			}
			if (!boolarray[curnum])
			{
				count++;
			}
		}
		cout << count << endl;
		count =0;
	}
}

