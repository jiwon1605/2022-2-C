#include <stdio.h> //������ �ϳ� �Է� �ް�, ��Ȯ�� ���� ������ ġ�� correct��� ��µǰ� �ϼ���.
//�� ��, �Է� �� ������ �ܾ�� �и��Ͽ� ��µǰ� �ϼ���.
int main(void)
{
	char str1[100];
	char str2[100];
	int i = 0;

	printf("Insert a sentence: ");
	gets_s(str1, 99);

	printf("Insert the same: ");
	gets_s(str2, 99);

	while (str1[i++] != 0) {
		if (str1[i] == str2[i])
			continue;
		else
		{
			printf("wrong\n");
			exit(0);
		}
	}
	printf("words are: \n");

	int j;

	for (j = 0; j < i; j++)
	{
		printf("%c", str1[j]);
		if (str1[j] == ' ')
			printf("%\n");

	}

	return 0;
}

