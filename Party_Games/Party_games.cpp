#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> Vstring;
string word0;
string word1;
int num=-1;

void sort () 
{
	sort(Vstring.begin(),Vstring.end());
}
bool takeinput()
{
	Vstring.clear();
	cin >> num;
	if(num==0)
	{
		return false;
	}
	string str;
	for (int i =0;i<num;i++)
	{
		cin >> str;
		Vstring.push_back(str);
	}
	return true;
}
void print()
{
	for(int i =0;i<Vstring.size();i++)
	{
		cout << "\n" << Vstring[i];
	}
	cout << "\n" << endl;
}
void findwords()
{
	if(Vstring.size()==2)
	{
		word0=Vstring[0];
		word1=Vstring[1];
	}
	else
	{
		word0 = Vstring[Vstring.size()/2-1];
		word1 = Vstring[Vstring.size()/2];
	}
}
void findletter()
{
	//cout << word0 << " " << word1 << endl;
	bool flag = true;
	char c0 = word0.c_str()[0];
	char c1 = word1.c_str()[0];
	if (word0.size() == 1)
	{
		if (c0==c1)
		{
			cout << c1 << endl;
		}
		else
		{
			cout << c0 << endl;
		}
		return;
	}
	for (int i =0 ; word0.size() > i && flag ;i++)
	{
		c0 = word0.c_str()[i];
		c1 = word1.c_str()[i];
		if (c0==c1)
		{
			cout << c0;
		}
		else
		{
			//cout << "    " << c0 << endl;
			c0++;
			cout << c0;
			flag=false;
		}
	}
	cout << endl;

}
int main ()
{
	string str ="qy";
	//cout << str.size() << endl;
	while(takeinput())
	{
		sort();
		findwords();
		//cout << word0 << " " << word1 << endl;
		findletter();
	}
}
