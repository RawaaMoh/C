#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <string.h>

int main(int argc, char** argv) {
	

	float arraysingal[20] = {-1, 3, 4, -1, -3, 2, -4, -4, 5, 6, 4, 2, -2, -3, 1, 2 };
	int Size, i , Positive_Count = 0, Negative_Count = 0;
	for (i = 0; i < 20; i++)
	{
		if (arraysingal[i] < 0)
		{	
			Negative_Count++;
		}
	}
	printf("\n Row's result = %d\n ", Negative_Count);
	return 0;
}
