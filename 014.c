#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int TABANAYUVARLAMA(float sayi,int deger);

int main()
{
	int sum;
	float money;
	printf("Please enter an integer value: ");
	scanf("%d", &sum);
	
	printf("Please enter a float variable: ");
	scanf("%f", &money);
	printf("\nThe variables you entered were\n");
	printf("value of sum = %d\n", sum);
	printf("value of money = %f\n", money);
	int yakindeger = TABANAYUVARLAMA(money,sum);
	printf("\n TABANAYUVARLAMA degeri %d \n",yakindeger);
}

int TABANAYUVARLAMA(float sayi, int deger)
{
	int i;
	int temp = 0;
	for (i = 1; i <= sayi; i++)
	{
		
		if (deger<sayi)
		{
			temp = deger;
		}
		else
		{
			break;
		}
		deger = deger * temp;

	}

	return temp;
}
