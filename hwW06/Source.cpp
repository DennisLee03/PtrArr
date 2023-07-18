#include<stdio.h>
void f(int **x);
void main() {
	int *ptr1[10], *ptr2[10], *ptr3[10];
	int arr[10];
	for (int i = 0;i < 10;i++)
		arr[i] = i + 1;
	for (int i = 0;i < 10;i++)
		ptr1[i] = &arr[i];
	for (int i = 0;i < 10;i++)
		ptr2[i] = &arr[10-i-1];
	for (int i = 0;i < 10;i++) {
		if (i<5) ptr3[i] = &arr[2 * i];
		else ptr3[i] = &arr[2 * i+1-10];
	}
	f(ptr1);
	f(ptr2);
	f(ptr3);
}
void f(int **x) {
	for (int i = 0;i < 10;i++) {
		if (i < 9) {
			printf("%d", *x[i]);
			printf(",");
		}
		else printf("%d", *x[i]);
	}
	printf("\n");
}