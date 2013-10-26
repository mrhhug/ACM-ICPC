#include <iostream>

using namespace std;

int a;
int b;
int c;
int d;

void input()
{
	cin >> a >> b >> c >> d;
}

bool math()
{
	if(a==b==c==d)
	{
		return false;
	}
	return true;
}
int main()
{
	while(true)
	{
		input();
		if(a==b==c==d==0)
		{
			break;
		}
		int i =0;
		while(math())
		{
			i++;
		}
		cout << i;
	}
}
