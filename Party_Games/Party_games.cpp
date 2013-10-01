#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> Vstring;
string word0;
string word1;

void add1() {
	Vstring.push_back("FRED");
	Vstring.push_back("SAM");
	Vstring.push_back("JOE");
	Vstring.push_back("MARGARET");
	Vstring.push_back("MARY");
	Vstring.push_back("MARCIE");
}

void add() {
	Vstring.push_back("FRED");
	Vstring.push_back("FREDDIE");
}

void sort () {
	sort(Vstring.begin(),Vstring.end());
}

void print(){
	for(int i =0;i<Vstring.size();i++)
	{
		cout << "\n" << Vstring[i];
	}
	cout << "\n" << endl;
}

void findwords() {
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
void findletter() {
	cout << word0 << "\n";
	cout << word1 << "\n";
	cout << endl;
	int i ;
	int max = word0.size()-1;
	for (i =0; word0.at(i)==word1.at(i) && i<max;i++)
	{
	}
	if (max == i)
	{
		cout << word0 << endl ;
	}
	else
	{
		char ch = word0.at(i);
		for (int j =0; j<i;j++)
		{
			cout << word0.at(j);
		}
		ch++;
		cout << ch << "\n";
	}
}

int main () {
	//cout << " \n" << "good day" <<"\n";
	add1();
	//print();
	sort();
	//print();
	findwords();
	findletter();
}
