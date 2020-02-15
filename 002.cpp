#include <stdio.h>
float fonkhesap(int yeni_n)
{
	float sum2 = 0, f = 1, i,sign=1;
    for (i = 1; i <= yeni_n; i++)
    {
        f = f * i;
        sum2 = sum2 +sign*(i / f);
        sign=-sign;
    }
    return(sum2);
}
main()
{
	int n;
	float sonuc;
	
	printf("n degerini giriniz:");scanf("%d",&n);
	if(n>0)
	{
		sonuc=fonkhesap(n);
	
		printf("\nBulunan deger:%f",sonuc);
	}
	else
		printf("Sýfýrdan buyuk deger giriniz...");
	
}
