#include<iostream>
#include<cstdio>
using namespace std;

int max(int a, int b) {return a>b?a:b; }

int M[2000][2000];

<<<<<<< HEAD
	for(int i=0;i<=n;i++)
       	{
		for(int j=0;j<=W;j++)
	       	{
			if(i==0 || j==0)
				K[i][j] = 0;
			else if(wt[i-1] <= j)
				K[i][j] = max(val[i-1] + K[i-1][j-(wt[i-1])], K[i-1][j]);
=======
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
>>>>>>> 645b6caffe5bcee7a8f3b70f3935c90610d10673
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
<<<<<<< HEAD
	while(true)
       	{
		int n;
		double m;
		//double mm,cc,pp;
		cin >> n >> m;
		int m_int = (int)(m*100);
		//m=mm*100;
		if(n == 0 && m == 0)
			return 0;
		int c[n], p[n], dollar[n], cent[n];
		for(int i=0;i<n;i++)
		{
			/*cin >> cc >> pp;
			c[i]=cc*100;
			p[i]=pp*100;*/
			scanf("%d %d.%d", &c[i], &dollar[i], &cent[i]);
			p[i] = (dollar[i] * 100) + cent[i];
		}
		cout << knapsack(m_int, c, p, n) << endl;
=======
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
>>>>>>> 645b6caffe5bcee7a8f3b70f3935c90610d10673
	}
	//   vector < int >back(N, 0);
	cout<<knapsack(value,weight,C,N)<<endl;
	return 0;
}
