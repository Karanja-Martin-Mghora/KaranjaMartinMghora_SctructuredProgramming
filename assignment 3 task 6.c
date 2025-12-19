#include <stdio.h>

// pass by value
void incrementByValue(int x) {
    x = x + 1;
}

// pass by reference
void incrementByReference(int *x) {
    *x = *x + 1;
}

int main() {
    int num = 10;

    printf("Initial value of num: %d\n", num);

    incrementByValue(num);
    printf("After incrementByValue: %d\n", num);

    incrementByReference(&num);
    printf("After incrementByReference: %d\n", num);

    return 0;
}
