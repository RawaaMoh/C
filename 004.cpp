 #include <stdio.h>
main(){

int i,j,k;
 for (i=1; i<=1000; i++) {
k=1;
 for (j=2; j<i; j++)
 if (i % (j*j) == 0)
 k = 0;
 if (k)
 printf("%d\n",i);
}}
