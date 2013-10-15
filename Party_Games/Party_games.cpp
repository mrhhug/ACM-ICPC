#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> Vstring;
string word0;
string word1;
int num=-1;
bool printed=false;

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
    if(word0.size()==1)
    {
        cout << word0<< "__";
    }
   cout << word0 << " " << word1 <<endl;
}
int main ()
{
	string str ="q";
	//cout << str[0] << str[2]<<endl;
	while(takeinput())
	{
		sort();
		findwords();
		//cout << word0 << " " << word1 << endl;
		findletter();
	}
}
