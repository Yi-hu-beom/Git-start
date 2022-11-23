#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upper_lower(int c);

int main() {
    char A[20];
    int B = 0;

    while (1) {
        if (B == '.')
            break;
        printf("문자를 입력하시오: ");

        B = getchar();
        fflush(stdin);
        upper_lower(B);
    }

    return 0;
}

void upper_lower(int c) {
    int i;
    if (c >= 'a' && c <= 'z') {
        c -= 'a' - 'A';
        putchar(c);
    }
    else if (c >= 'A' && c <= 'Z') {
        c += 'a' - 'A';
        putchar(c);
    }
    printf("\n");
}


