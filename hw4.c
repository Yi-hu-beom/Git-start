#include <stdio.h>
int main(void)
{
	int num = 0;
	printf("���� ���� �ϳ��� �Է��Ͻÿ�");
	scanf("%d", &num);
	if (num % 2 != 0)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}
