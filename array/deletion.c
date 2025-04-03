#include <stdio.h>
int main()
{
    int a[50], size, i;
    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // deletion at specific position
    int pos;
    printf("Enter the position to delete element:");
    scanf("%d", &pos);
    if(pos < 1 || pos > size)
    {
        printf("Invalid position\n");
        return 0;
    }else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
    }
    printf("The elements of array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }


    printf("\n");
    return 0;
}
