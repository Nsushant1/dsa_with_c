#include <stdio.h>

// Function banako
void toH(int n, char src, char dest, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }
    toH(n - 1, src, aux, dest);

    printf("Move disk %d from %c to %c\n", n, src, dest);

    toH(n - 1, aux, dest, src);
}
int main()
{
    int n; // disk ko number
    printf("Enter the number of disk:");
    scanf("%d", &n);
    

    toH(n, 'A', 'C', 'B'); // rod ko name ho yo
    return 0;
}