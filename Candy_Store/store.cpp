#include<iostream>
using namespace std;

int max(int a, int b) {return a>b?a:b; }

int M[2000][2000];

int knapsack(int value[], int weight[], int C, int n)
{
	/*
	 *
	 *
	 * this is all shit
	 * what we need to do is find the max cost
	 * fill up the knapsack with the best price saving room for the highest price item
	 * then iterate through seeing if the highest-1 will make the best value
	 *
	 *
	for(int i = 1; i <= C; i++)
	{
		for(int j = 0; j <n; j++)
		{
			if(j > 0)
			{
				M[j][i] = M[j-1][i];
				if (weight[j] <= i)
				{
			  		M[j][i] = max(M[j][i], M[j-1][i-weight[j]]+value[j]);
			  	}
			}
			else
			{
				M[j][i] = 0;
				if(weight[j] <= i)
				{
					M[j][i] = max(M[j][i], value[j]);
			  	}
			}
		//    cout << M[i][n-1] << endl;
		}        
	}
	//
	return M[n-1][C];
}
int main()
{
	double cc,ww;
	int C, N;
	cin >> N >> cc;
	C=cc;
	//    cout << C << endl;
	int* value = new int[N+1];
	int* weight = new int[N+1];
	for ( int i = 0; i < N; i++) {
		//cin>>weight[i]>>value[i];
		cin>>value[i]>>ww;
		weight[i]=ww;
	}
	//   vector < int >back(N, 0);
	cout<<knapsack(value,weight,C,N)<<endl;
	return 0;
}
