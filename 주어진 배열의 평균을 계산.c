#include<stdio.h>
#define DEBUG

int main(void)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = sumArray(array);
#ifdef DEBUG
	printf("배열의 평균 = %lf\n", sum / 10.0);
#endif
	return 0;

	return 0;
}

int sumArray(int array[]) {
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++) {
		sum += array[i];
#ifdef DEBUG
		printf("%d를 더하는 중\n", i + 1);
#endif
	}
#ifdef DEBUG
	printf("평균 = %lf\n", sum / 10.0);
#endif
	return sum;
}