#include<stdio.h>
#define DEBUG

int main(void)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = sumArray(array);
#ifdef DEBUG
	printf("�迭�� ��� = %lf\n", sum / 10.0);
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
		printf("%d�� ���ϴ� ��\n", i + 1);
#endif
	}
#ifdef DEBUG
	printf("��� = %lf\n", sum / 10.0);
#endif
	return sum;
}