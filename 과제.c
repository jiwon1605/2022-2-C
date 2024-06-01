#include <stdio.h> //문장을 하나 입력 받고, 정확히 같은 문장을 치면 correct라고 출력되게 하세요.
//그 후, 입력 된 문장을 단어별로 분리하여 출력되게 하세요.
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

