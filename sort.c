#include "sortg.h"

void BubbleSort (int a[], int n) {
	int i, j, t;
	for (i=1; i<n; i++) {
		for (j=0; j<n-i; j++) {
			if (a[j]>a[j+1]) {
				t=a[j+1];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

void InsertSort (int a[], int n) {
	int i, j, temp;
	for (i=1; i<n; i++) {
		temp=a[i];
		j=i-1;
		while (j>=0 && a[j]>temp) {
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void SelectSort (int a[], int n) {
	int i, j, k, m;
	for (i=0; i<n-1; i++) {
		m=a[i];
		k=i;
		for (j=i+1; j<n;j++)
			if (a[j]<m) {
				m=a[j];k=j;
			}
		a[k]=a[i];
		a[i]=m;
	
	}
}

void PartSort (int a[], int low, int high) {
	int x = a[low];
	while (low<high) {
		while (low<high && a[high]>=x) high--;
		if (low<high) {
			a[low]=a[high];
			low++;
		}
		while (low<high && a[low]<=x) low++;
		if (low<high) {
			a[high]=a[low];
			high--;
		}
	}
	a[low]=x;
	printf("%d ", low);
	return;
}
