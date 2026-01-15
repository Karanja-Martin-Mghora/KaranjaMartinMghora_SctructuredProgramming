#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int sum = 0;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is : %d\n", sum);

    free(arr);

    return 0;
}
