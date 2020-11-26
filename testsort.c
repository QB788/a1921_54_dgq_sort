#include"sortg.h"
#define N 10

int main () {
	int a[N], i;
	srand(time(0));
	for (i=0; i<N; i++)
		a[i]=rand()%100;
	printf("初始数据为：");
	for (i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	BubbleSort(a, N);
	printf("排序后数据：");
	for (i=0; i<N; i++) printf("%d ", a[i]);	
	printf("\n");
	InsertSort(a, N);
	printf("排序后数据：");
	for (i=0; i<N; i++) printf("%d ", a[i]);
	printf("\n");
	SelectSort(a, N);
	printf("排序后数据：");
	for (i=0; i<N; i++) printf("%d ", a[i]);
	printf("\n");
	PartSort(a, 0, i-1);
	printf("排序后数据：");
	for (i=0; i<N; i++) printf("%d ", a[i]);
	printf("\n");
}
