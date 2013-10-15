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
	cout << word0 << "  " <<word0.size()<< " "<< word1 << "______";
	if (word0.size()==1==word1.size())
	{
        cout << word0;
    }
	int i=0;
	bool printed=false;
	for ( ; word0.size() > i && word1.size() > i ;i++)
	{
		if(word0.compare(i,1,word1,i,1)==0)
		{
            printed=true;
            cout << word0.substr(i,1);
		}
		else
		{
            break;
        }
	}
	//if (false)
	if(!printed)
	{
        char c,d;
        c=word0[0];
        d=word1[0];
        c++;
        if(c!=d)
        {
            //cout<<c;
        }
	}
	cout << endl;

}
int main ()
{
	string str ="q";
	//cout << str.size() << endl;
	while(takeinput())
	{
		sort();
		findwords();
		//cout << word0 << " " << word1 << endl;
		findletter();
	}
}
