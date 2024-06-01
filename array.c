#include "array.h"
int functionCount;

int get_sum_of_array(int a[], int size) {

	int i = 0;
	int sum = 0;

	for (i = 0; i < size; i++) {
		sum += a[i];
	}

	return sum;
}

int printf_array(int a[], int size) {

	int i = 0;

	printf("[");
	for (i = 0; i < size; i++) {
		printf(" %d ", a[i]);
	}
	printf("]\n");

	return 0;

}