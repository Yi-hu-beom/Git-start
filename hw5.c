#include<stdio.h>

void ABC(int n) {
    if (n > 1) 
        ABC(n / 2);
        printf("%d", n % 2);
}


int main() {
    int n;
    printf("Please enter a number");
    scanf("%d", &n);
    printf("2Áø¼ö: ", n);
    ABC(n);
}