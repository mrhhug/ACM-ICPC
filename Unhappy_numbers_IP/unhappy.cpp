#include <algorithm>
#include <string>
#include <iostream>
#include <thread>
#include <sstream>

using namespace std;

unsigned long long maincount,hi,lo;

void do_join(thread& t)
{
	t.join();
}
void join_all(vector<thread>& v)
{
	for_each(v.begin(),v.end(),do_join);
}
void incramentmaincount()
{
	maincount++;
}
unsigned long long square(char num)
{
	int n = num-'0';
	return n*n;
}
unsigned long long pullapartnum(unsigned long long num)
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
void checkhappy (unsigned long long num)
{
	int MAXDEPTH = 25;
	int count =0;
	unsigned long long inputnumber = num;
	while (num > 1)
	{
		if (MAXDEPTH < count)
		{
			incramentmaincount();
			return;
		}
		num = pullapartnum(num);
		count++;
	}
	return;
}
void takeinput()
{
	string cinhi,cinlo;
	cin >> cinlo;
	cin >> cinhi;
	hi = strtoull(cinhi.c_str(),NULL, 10);
	lo = strtoull(cinlo.c_str(),NULL, 10);
}
int main ()
{
	while (true)
	{
		int MAXTHREADS = 3;
		maincount = 0;
		takeinput();
		if (hi == 0 && lo == 0)
		{
			break;
		}
		int arraycount;
		while(lo<=hi)
		{
			arraycount =1;		
			thread threadarray[MAXTHREADS];
			threadarray[0]=thread(checkhappy,lo);
			lo++;
			for(int i =1;i<MAXTHREADS && lo<=hi;i++)
			{
				threadarray[i]=thread(checkhappy,lo);	
				lo++;
				arraycount++;
			}
			for (int i =0; i<arraycount;i++)
			{
				threadarray[i].join();
			}
			
		}
		cout << maincount << endl;
	}
}

