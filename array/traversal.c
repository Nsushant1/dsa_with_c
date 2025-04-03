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

    //INSERTION AT SPECIFIC POSITION
    int pos, ele;
    printf("Enter the position to insert element:");
    scanf("%d", &pos);
    printf("Enter the element to insert:");
    scanf("%d", &ele);

    for (i = size; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;
    size++;

    //insertion at beginning
    for (i = size; i >= 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = ele;
    size++;

    //insertion at end
    a[size] = ele;
    size++;
    

    printf("The elements of array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    return 0;
}