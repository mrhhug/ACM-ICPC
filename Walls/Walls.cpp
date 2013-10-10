#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

int num=-1;
int xcoor[36],ycoor[36],xwall[36],xwallList[36];
vector<int> vect;

void findxwalls()
{
	int fort=xcoor[0];
	for (int i =1 ;i<num-1;i++)
	{
		if(fort<xcoor[i])
		{
			vect.push_back(xcoor[i-1]);
		}
		fort = xcoor[i];
	}
}
void wallcount()
{
}

void takeinput()
{
	int numx,numy;
	cin >> num;
	xcoor[num];
	ycoor[num];
	for (int i = 0; i<num;i++)
	{
		cin >> numx;
		cin >> numy;
		xcoor[i]=numx;
		ycoor[i]=numy;
	}
	int N = num/sizeof(xcoor[0]);
	sort(xcoor,xcoor+N);
	sort(ycoor,ycoor+N);
}
int main ()
{
	//cout << "hello" << endl;
	while (true)
	{
		if(num == 0)
			break;
	//	cout << num << endl;
		takeinput();
		findxwalls();
	}
}
