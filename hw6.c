#include <stdio.h>
int Hol(int X)
{
    if (X % 2 == 1)
    {
        printf("%d ", X);
    }
    return 0;
}

int JJak(int Y)
{
    if (Y % 2 == 0)
    {
        printf("%d ", Y);
    }
    return 0;
}

int main(void)
{
    int A[5];
    int i;

    printf("please input five integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Odd numbers: ");
    for (int i = 0; i < 5; i++)
    {
        Hol(A[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < 5; i++)
    {
        JJak(A[i]);
    }
    return 0;
}