#include <stdio.h>
#define ROWS 3
#define COLS 4

int sumColumn2(int *p, int col, int nof_row, int nof_col){
	int j;
	int sum = 0;
	for(j=0; j< nof_row; j++)
		sum += *(p + j*nof_col+col-1);
	return sum;
}
int maxcolumn(int *p, int col, int nof_row, int nof_col)//maksimumu buloan
{
	int j;
	int max= *(p+col-1);
	for(j=0; j< nof_row; j++)
		if(max<*(p + j*nof_col+col-1))
				max=*(p + j*nof_col+col-1);
				
	return max;			
} 
int maxcolumn2(int *p, int col, int nof_row, int nof_col)//ikinic maksimumu bulan
{
	int j;
	int max1= *(p+col-1);
	int max2= *(p+1*nof_col+col-1);
	for(j=1; j< nof_row; j++)
		if (*(p + j*nof_col+col-1) > max1) {
            max2 = max1;
            max1 = *(p + j*nof_col+col-1);
         }
         else if (*(p + j*nof_col+col-1) > max2)
            max2 = *(p + j*nof_col+col-1);
			
	return max2;			
}       
 main() {
  
  // 2d array
  int num[ROWS][COLS] = {
    {1, 2,  3,  5},
    {5, 6,  7,  16},
    {9, 10, 11, 12}
  };
  int row=0;
  int sum,max;	int *p;

  //p=&num[0][0];
  sum = sumColumn2(&num[0][0], 4, ROWS, COLS);
  //sum = sumColumn2(p, 4, ROWS, COLS);
  printf("Col Sum is %d\n", sum);
  max=maxcolumn2(&num[0][0], 4, ROWS, COLS);
   printf("Max value of column is %d\n", max);
  
}



