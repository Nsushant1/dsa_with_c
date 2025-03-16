#include <stdio.h>
int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void display();

int main()
{
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Stack operation using array");
    printf("\n---------------------------\n");
    while (choice != 4)
    {
        printf("Choose from the below option:");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Existing......");
            break;
        default:
            printf("Invalid !");
        }
    };
    return 0;
}
// push function
void push()
{
    int val;
    if (top == n - 1)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        printf("Enter the value to be pushed:\n");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
// pop function
void pop()
{
    if (top == -1)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        top--;
    }
}

// display function
void display()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("\nUnderflow!!\n");
    }
}