#include <iostream>
#include <vector>
//#include <bitset>

using namespace std;
const int matrixsize = 100000;
//bool matrix [100][100];
vector< vector<bool> > matrix;

void creatematrix()
{
	for (int i =0;i<matrixsize;i++)
	{
		vector<bool> small;
		for (int j =0;j<matrixsize;j++)
		{
			small.push_back(false);
		}
		matrix.push_back(small);
	}
}
void clearmatrix()
{
	for (int i =0;i<matrixsize;i++)
	{
		for (int j =0;j<matrixsize;j++)
		{
			matrix.at(i).at(j)=false;
		}
	}
}
void addtomatrix(int x1,int y1,int x2,int y2)
{
	//x1+=1000;y1+=1000;x2+=1000;y2+=1000;
	for (int i=x1;i<x2;i++)
	{
		for (int j=y1;j<y2;j++)
		{
			matrix.at(i).at(j)=true;
		}
	}
}
int countmatrix()
{
	int count =0;
	for (int i=0;i<matrixsize;i++)
	{
		for (int j=0;j<matrixsize;j++)
		{
			if (matrix.at(i).at(j)==true)
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{	
	//x1=0;y1=0;x2=100;y2=100;
	//xx1=30;yy1=30;xx2=60;yy2=60;
	
	//x1=0;y1=100;x2=300;y2=200;
	//xx1=100;yy1=0;xx2=200;yy2=300;
	creatematrix();
	cout << "done" ;
//	addtomatrix(0,0,100,100);
//	addtomatrix(30,30,60,60);
//	cout << countmatrix() << endl;
//	clearmatrix();
//	addtomatrix(0,100,300,200);
//	addtomatrix(100,0,200,300);
//	cout << countmatrix() << endl;
	return 0;
}
