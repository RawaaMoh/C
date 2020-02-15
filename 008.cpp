#include <stdio.h>

void terscevir (int dizi[4][4]){
	int yeni[4][4];
	int i,j;
	for(i=0; i<4 ; i++){
		for(j=0; j<4; j++){
			printf("%d", dizi[i][j]);
		}
		printf("\n");
	}
	}
	
	main(){
		int dizi[4][4]= {12, 34, 45, 67,
		                 34, 67, 84, 43,
						 23, 56, 76, 76,
						 24, 75, 13, 54};
		terscevir(dizi);
	}
