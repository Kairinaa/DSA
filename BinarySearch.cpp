#include <stdio.h>

int binSearch(int a[], int k, int n) {
	int left = 0; int right = n-1;
	
	while (left <= right) {
		int mid = (left + right)/2;
		if (a[mid] == k)
			return mid;
		else if (a[mid] < k)
			left = mid + 1;
		else 
			right = mid - 1;
	}
	
	return -1;
}

int main() {
	int a[] = {2,3,4,10,40};
	int n = sizeof(a)/ sizeof(a[0]);
	
	int x = binSearch(a,10,5);
	printf("%d", x);
}
