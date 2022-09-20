#include <stdio.h>

int main(void)
{
	double km = 0;
	double miles = 0;
	printf("please enter kilometers");
	scanf("%lf", &km);
	miles = km * 0.621372;
	printf("%.2lfkm is equal to %.2lf", km, miles);
	return 0;
}
