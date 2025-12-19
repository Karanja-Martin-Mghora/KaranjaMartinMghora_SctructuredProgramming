#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 20;
    int sum;

    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("sum = %d\n", sum);

    return 0;
}
