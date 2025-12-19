#include <stdio.h>

int main() {
    int count = 10;
    int *pCount;

    pCount = &count;

    *pCount = 25;

    printf("New updated value of count: %d\n", count);

    return 0;
}
