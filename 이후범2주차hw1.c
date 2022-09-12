#include <stdio.h>
int main(void)
{
	int num1, num2;
	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;
	printf("input two integers");
	scanf("%d,%d", &num1, &num2);
	printf("AND 연산의 결과: %d \n", num3);
	printf("OR 연산의 결과: %d \n", num4);
	printf("XOR 연산의 결과: %d \n", num5);
	return 0;
}