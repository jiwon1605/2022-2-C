#include<stdio.h>
#include "array.h"

int main(void)
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum;

	printf_array(array, 10);

	sum = get_sum_of_array(array, 10);
	printf("배열 요소들의 합 = % d", sum);

	return 0;
}
