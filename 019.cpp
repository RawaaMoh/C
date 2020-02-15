
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
#define ROW 3
#define COL 4

int sumRow(int* p, int row);  
int max(int *p);

int main(int argc, char** argv) {
	int Array[ROW][COL] = { {1,22,34,84},{5,66,58,7},{54,54,6,41} };
	int maximum = max(&Array[0][0]);
	printf("max = %d \n",maximum);
	int row = 1;
	printf("row = %d\n",row);
	int sumofrow = sumRow(&Array[0][0],row);
	printf("Sum Of Row = %d",sumofrow);

	return 0;
}

int sumRow(int* p, int row)
{
	int i = 0, j = 0, sum = 0;
		for (j = 0; j < COL; ++j)
		{
		
			sum = sum + *(p + (row * COL) + j);		
		}
	
	return sum;
}
int max(int *p) {

	int i = 0, j = 0;

	int maximum = 0;

	for (i = 0; i < ROW; ++i) 
	{
		for (j = 0; j < COL; ++j) 
		{
			
			printf("Array[%d][%d] = %d\n", i, j, *(p + (i * COL) + j));
			if (*(p + (i * COL) + j) > maximum) 
			{
				maximum = *(p + (i * COL) + j); 
			}

		}

	}
	return maximum;
}
