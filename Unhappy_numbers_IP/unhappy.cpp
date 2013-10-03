#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

vector<string> Vstring;
string lo;
string hi;

string incrament(string str)
{
	char ch = '9';
	if(str.size()==1)
	{
		ch = str.at(0);
		if(ch!='9')
		{
			ch++;
			str = ch;
			return str;
		}
		return "10";
	}
	if(str.at(0)=='9')
	{
		str="0"+str;
	}
	int count =1;
	while(ch == '9')
	{
		ch = str.at(str.size()-count);
		count++;
	}
	count -=2;
	if(count != 0)
	{
		ch = str.at(str.size()-count-1);
		ch++;
		str=str.substr(0,str.size()-count-1);
		str+=ch;
		for (int i=0;i<count;i++)
		{
			str+='0';
		}
	}
	return str;
}

string square(char num)
{
	if(num=='0')
	{
		return "";
	}
	if(num=='1')
	{
		return "1";
	}
	if(num=='2')
	{
		return "4";
	}
	if(num=='3')
	{
		return "9";
	}
	if(num=='4')
	{
		return "16";
	}
	if(num=='5')
	{
		return "25";
	}
	if(num=='6')
	{
		return "36";
	}
	if(num=='7')
	{
		return "49";
	}
	if(num=='8')
	{
		return "64";
	}
	if(num=='9')
	{
		return "81";
	}
}

string pullapartnum(string num)
{
	cout << num << endl;
	string newstring = "";
	for (int i =0 ;i<num.size();i++)
	{
		newstring+=square(num.at(i));
	}
	return newstring;
}

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

void takeinput()
{
	cin >> lo;
	cin >> hi;
}



int main ()
{
	cout << pullapartnum("665") << endl;
	//cout << checkhappy("70") << endl;
	//cout << incrament("99") << endl;
	while (false)
	{
		takeinput();
		if (lo == "0" && hi == "0")
		{
			break;
		}

	}
	//cout << count << endl;
	//cout << str << endl;
}
