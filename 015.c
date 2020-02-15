#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main() {
	
	int i,j;
	int  B[4][4], C[4][2];

	for (i = 0; i <4; i++)
	{
		for (j = 0; j <4; j++)
		{
			printf(" B [%d][%d] : ",i,j);
			scanf("%d", &B[i][j]);
		}
	}


	for (i = 0; i <4; i++)
	{
		for (j = 0; j <4; j++)
		{
			printf(" %d ",B[i][j]);
		}
		printf(" \n ");
	}


	int k = 0;
	for (i = 0; i <4; i++)
	{
		for (j = 0; j <4; j=j+2)
		{    
			if (k>1)
			{
				k = 0;
			}
			if (B[i][j]<B[i][j+1]) {
				C[i][k] = B[i][j+1];
			}
			else
			{
				C[i][k] = B[i][j];
			}
			k++;
		}
		printf(" \n ");
	}

	for (i = 0; i <4; i++)
	{
		for (j = 0; j <2; j++)
		{
			printf(" %d ", C[i][j]);
		}
		printf(" \n ");
	}

	system("pause");
    return 0;
    
}
