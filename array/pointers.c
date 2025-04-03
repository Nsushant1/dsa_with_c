//printing array using pointers

#include <stdio.h>
int main()
{
    int a[5], size, i;
    int *ptr =a;

    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<5;i++){
        printf("%d ", *(ptr+i));
    }
}