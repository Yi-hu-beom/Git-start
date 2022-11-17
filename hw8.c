#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	int sum;
	double avg;
	int A[5];
	printf("5개 정수 입력");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
	}
	avg = sum / 5;
	printf("%d", avg);
	return 0;
}