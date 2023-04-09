#include <stdio.h>

void insertion_sort(int a[], int n) {
	for (int i = 1; i<n; i++) {
		int k = a[i];
		int j = i - 1;
		while(j>= 0 && a[j]> k)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = k;
	}
}

int main() {
	int a[] = {41,23,4,14,56};
	insertion_sort(a, 5);
	for(int i =0; i< 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
