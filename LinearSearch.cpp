#include <stdio.h>

int linearSearch(int a[],int k,int n) {
	for (int i = 0; i<n; i++) {
		if(a[i]== k) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = {2,3,4,10,40};
	int n = sizeof(a)/sizeof(a[0]);
	int x = linearSearch(a,40,5);
	printf("%d",x);
}
