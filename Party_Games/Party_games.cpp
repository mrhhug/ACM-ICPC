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

void findwords()
{
	//dividing by 2 messes up when there is only 2
	if(Vstring.size()==2)
	{
		word0=Vstring[0];
		word1=Vstring[1];
	}
	//normally this will work
	else
	{
		word0 = Vstring[Vstring.size()/2-1];
		word1 = Vstring[Vstring.size()/2];
	}
}
void findletter()
{
<<<<<<< HEAD
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
=======
	string returnvalue = "";
	string knowngoodsubstring = "";
	for( int i=0; i<word0.size(); ++i )
	{
		//peal off the next char or the string you want to go to the left(stay in the group starting with 'a'
		char c = word0[i];
		/////be careful not to char incrament at z, i think most people considered the ending of the word
		//i hadent caught this except for when I looked at the .judge
		//remember to consider all possible cases, we won't see the .judge in comp
		if(c!='Z' && i<word0.size()-1)
		{
			c++;
		}
		//first time arround  knowngoodsubstring=="", so nothing really happens, every other time arround
		//we are adding the char we pealed off to all letters that are goodk
		returnvalue = knowngoodsubstring+c;
		////gaylor is big on the compareto in java, this is c++'s syntax
		//glad i took that class(data structures)
		if(returnvalue.compare(word0) >= 0 && returnvalue.compare(word1) < 0)
		{
			//we are done wit this loop
			//terminate early
			break;
		}
		knowngoodsubstring += word0[i];
	}
	cout <<  returnvalue << endl;

}
int main ()
{
>>>>>>> 537cd0b134e44080240a3517b74cba47917eef22
	while(takeinput())
	{
		sort();
		findwords();
		//cout << word0 << " " << word1 << endl;
		findletter();
	}
}
