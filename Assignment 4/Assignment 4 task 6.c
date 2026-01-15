#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, pos, val;
    int *arr;

    printf("Input the size of array : ");
    scanf("%d", &n);

    arr = (int *)malloc((n + 1) * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The current list of the array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Input the value to be inserted : ");
    scanf("%d", &val);

    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
        free(arr);
        return 1;
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    printf("After Insert the element the new list is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
