#include <stdio.h>
int main(void)
{
	int num = 0;
	printf("양의 정수 하나를 입력하시오");
	scanf("%d", &num);
	if (num % 2 != 0)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}
