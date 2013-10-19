#include <iostream>

using namespace std;

int main()
{
	bool matrix [2000][2000];
	//ENSURE the matrix is starting at false
	for (int i =0;i<2000;i++)
	{
		for (int j =0;j<2000;j++)
		{
			matrix [i][j]=false;
		}
	}
	int x1,y1,x2,y2;
	int xx1,yy1,xx2,yy2;
	//this is jsut for sample testing
	
	x1=0;y1=0;x2=100;y2=100;
	xx1=30;yy1=30;xx2=60;yy2=60;
	
	//x1=0;y1=100;x2=300;y2=200;
	//xx1=100;yy1=0;xx2=200;yy2=300;

	//this is just to keep matrix in the unsigned world
	x1+=1000;y1+=1000;x2+=1000;y2+=1000;
	xx1+=1000;yy1+=1000;xx2+=1000;yy2+=1000;

	//populate matrix
	for (int i=x1;i<x2;i++)
	{
		for (int j=y1;j<y2;j++)
		{
			matrix [i][j]=true;
		}
	}
	for (int i=xx1;i<xx2;i++)
	{
		for (int j=yy1;j<yy2;j++)
		{
			matrix [i][j]=true;
		}
	}
	//count matrix
	int count =0;
	for (int i=0;i<2000;i++)
	{
		for (int j=0;j<2000;j++)
		{
			if (matrix [i][j]==true)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}



