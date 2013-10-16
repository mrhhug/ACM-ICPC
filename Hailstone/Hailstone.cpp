#include <iostream>

using namespace std;

//int arr[100000];
int highest =1;

int domath(int n)
{
	if(n%2==0)
	{
		return n/2;
	}
	return n*3+1;
}
int startloop(int n)
{
	while(n!=1)
	{
		if (n>highest)
		{
			highest = n;
		}
		n = domath(n);
	}
}
int main()
{
	int runs;
	int n;
	int nullvalue;
	cin >> runs;
	for (int i =1; i<=runs;i++)
	{
		cin >> nullvalue;
		cin >> n;
		startloop(n);
		cout << i << " " << highest << endl;
		highest =-1;
	}
}
