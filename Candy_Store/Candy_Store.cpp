#include <iostream>
#include <vector>
#include <string>

using namespace std;

double lowestPricedItem ;
double highetPricedItem ;
int numItems;
double cash;
int MaxNumberOfIndividualItems;
int HighestCalories;
double[][] matrix;
vector <string> vec;

void add()
{
	vec.push_back("2 8.00");
	vec.push_back("700 7.00");
	vec.push_back("199 2.00");
	vec.push_back("3 8.00");
	vec.push_back("700 7.00");
	vec.push_back("299 3.00");
	vec.push_back("499 5.00");
	vec.push_back("0 0.00");
}

void runBruteForce()
{
	erectMatrix();
        HighestCalories=-1;
        while(ContinueBruteForce())
	{
		incramentMatrix();
		if(matrixCostCount()<=cash)
                {
	                if(matrixCalCount()>HighestCalories)
	                {
				HighestCalories=matrixCalCount();
			}
		}    
        }
        cout << HighestCalories << endl;
}

int matrixCalCount()
{
	int sum =0;
        for (int i=0;i<numItems;i++)
        {
	        sum+=matrix[i][0]*matrix[i][2];
	}
        return sum;
}

double matrixCostCount()
{
	double sum =0;
        for (int i=0;i<numItems;i++)
        {
	        sum+=matrix[i][1]*matrix[i][2];
        }
        return sum;
}

void incramentMatrix()
{
	matrix[0][2]=matrix[0][2]+1;
        for (int i =0;i<numItems;i++)
	{
	        if(ContinueBruteForce() && matrix[i][2] > MaxNumberOfIndividualItems)
		{
			matrix[i][2]=0;
		        matrix[i+1][2]=matrix[i+1][2]+1;
	        }            
        }
}

bool ContinueBruteForce()
{
	if (matrix [numItems-1][2]>=MaxNumberOfIndividualItems)
        {
	        return false;
        }
        return true;
}

void erectMatrix()
{
	double matrix[numItems][3];
        highetPricedItem = -1;
        lowestPricedItem = 101;
        for(int i=0;i<numItems;i++)
        {
	        string str = vec.pop_front();
		matrix[i][0] = Integer.parseInt(str.substring(0, str.indexOf(" ")));
	        matrix[i][1] = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
	        matrix[i][2] = 0;
	        if(matrix[i][1]<lowestPricedItem)
	        {
		        lowestPricedItem=matrix[i][1];
	        }
	        if(matrix[i][1]>highetPricedItem)
	        {
		        highetPricedItem=matrix[i][1];
	        }
        }
        MaxNumberOfIndividualItems = (int) Math.floor(cash/lowestPricedItem);
}

int main()
{
	add();
	string str = vec.front();
        while("0 0.00"!=str)
        {
	        numItems = atoi(str.substr(0, str.find_first_of(" ")));
                cash = Double.parseDouble(str.substring(str.indexOf(" "),str.length()));
		runBruteForce();
	        str = arList.remove(0);
        } 
}
