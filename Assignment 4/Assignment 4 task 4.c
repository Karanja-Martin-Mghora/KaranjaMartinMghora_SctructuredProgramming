#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int max, min;

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
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    free(arr);

    return 0;
}
