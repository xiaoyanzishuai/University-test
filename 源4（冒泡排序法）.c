#include<stdio.h>
#define N 10
void main()
{
	int a[N], i, j, t;
	printf("input %d numbers:\n", N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if(a[j]>a[j+1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
	printf("the sorted numbers:\n");
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);
	printf("\n");
}