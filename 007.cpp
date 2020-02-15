#include <stdio.h>

void ters_cevir (int dizi[], int boyut)
{
	int dizi2[boyut];
	int i, k;
	for(i=0, k=boyut-1; i<boyut; i++, k--){
		dizi2[k]= dizi[i];		
	}
	for(i=0; i<boyut; i++){
		printf("%d\n", dizi2[i]);
	}

	}
	
main(){
	
	int list[5];
	int i;
	for(i=0; i<5; i++){
		printf ("%d. elemen girin: ", i+1);
		scanf("%d", &list[i]);
	}
	ters_cevir(list, 5);
}
