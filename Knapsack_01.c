//0-1 Knapsack Problem
/*Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. 
Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of 
this subset is smaller than or equal to W. 
You cannot break an item, either pick the complete item or don’t pick it (0-1 property).
*/

#include <stdio.h>
#include <stdlib.h>

int K[100][100];

int max(int a, int b)
{
	if(a>b)
		return a;
	return b;
}

int Knapsack(int W, int wt[], int val[], int n)
{
	int i, w, j;

	for(i=0; i<=n; i++)
	{
		for(w=0; w<=W; w++)
		{
			if(i==0 || w==0)
				K[i][w] = 0;
			else if(wt[i-1] <= w)
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
			else
				K[i][w]=K[i-1][w];
		}
	}
	printf("\nPrinting the knapsack fillup array : \n");
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=W; j++)
			printf("%d\t", K[i][j]);
		printf("\n");
	}
	return K[n][W];
}

int main()
{
	int val[] = {10, 40, 30, 50};
	int wt[] = {5, 4, 6, 3};
	int W = 10;
	int i, j;
	
	int n = sizeof(val) / sizeof(val[0]);
	int *included = (int *)calloc(n, sizeof(int));
	printf("\n (The included value:weight pairs are)  :  ");
	for(i=0; i<n;i++)
	{
		printf("%d:%d ", val[i], wt[i]);
	}
	printf("\n The maximum value that can be put in a knapsack of capacity %d is : %d\n", W, Knapsack(W, wt,val,n));
	int w = W;
	for(i = n; i>0; i--)
	{
		if(K[i][w] != K[i-1][w])
		{
			included[i-1] = 1;
			w = w - wt[i-1];
		}
	}
	printf("\n The inclusion aray : ");
	for(i = 0; i<n; i++)
		printf("%d ", included[i]);
	printf("\n");
	return 0;
}
