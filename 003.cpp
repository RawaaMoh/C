#include <stdio.h>
int find_closest (double array[], int n, double val) {
        int     i, mini = 0;
        double d,e;
        for (i=1; i<n; i++) {
                if (array[i] <= val) {
                         d = val - array[i];
                         e = val - array[mini];
                        if (d < e || e < 0) mini = i;
                }
        }
        if (array[mini] > val) return -1;
        return mini;
}
main()
{
	double array[6]={11,6,12,7,10,9};
	printf("indisi elemanin:%d",find_closest (array,6,8));
}
