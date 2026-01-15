#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int start = 0;
int count = 0;

void insertValue(int value)
{
    if (count < BUFFER_SIZE)
    {
        int index = (start + count) % BUFFER_SIZE;
        buffer[index] = value;
        count++;
    }
    else
    {
        buffer[start] = value;
        start = (start + 1) % BUFFER_SIZE;
    }
}

void printBuffer()
{
    if (count == 0)
    {
        printf("Buffer is empty.\n");
        return;
    }

    printf("Buffer (oldest → newest): ");
    for (int i = 0; i < count; i++)
    {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main()
{
    int value;
    char choice;

    printf("Circular Buffer Data Logger (BUFFER_SIZE = %d)\n", BUFFER_SIZE);

    printf("Enter initial value: ");
    scanf("%d", &value);
    insertValue(value);
    printBuffer();

    while (1)
    {
        printf("Enter new value: ");
        scanf("%d", &value);

        insertValue(value);
        printBuffer();

        printf("Insert another value? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y')
            break;
    }

    printf("Final buffer contents:\n");
    printBuffer();

    return 0;
}
