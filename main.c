#include <stdio.h>
#include <stdlib.h>

#define MAX 15

int count = 0;

struct stack
{
    int items[MAX];
    int top;
};
int main()
{
    struct stack s;
    s.top = -1;

    int choice, item;

    do
    {
        printf("\nEnter a number:\n 1.Push \n 2.Pop \n 3.IsEmpty \n 4.IsFull \n 5.Top \n 6.Exit: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (s.top == MAX - 1)
            {
                printf("STACK FULL\n");
            }
            else
            {
                printf("Enter item to push: ");
                scanf("%d", &item);
                s.top++;
                s.items[s.top] = item;
                count++;
                printf("Stack: ");
                for (int i = 0; i <= s.top; i++)
                {
                    printf("%d ", s.items[i]);
                }
                printf("\n");
            }
            break;

        case 2:
            if (s.top == -1)
            {
                printf("\nSTACK EMPTY\n");
            }
            else
            {
                printf("Item popped = %d\n", s.items[s.top]);
                s.top--;
                count--;
                printf("Stack: ");
                for (int i = 0; i <= s.top; i++)
                {
                    printf("%d ", s.items[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            if (s.top == -1)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("Stack is not empty.\n");
            }
            break;

        case 4:
            if (s.top == MAX - 1)
            {
                printf("Stack is full.\n");
            }
            else
            {
                printf("Stack is not full.\n");
            }
            break;

        case 5:
            if (s.top == -1)
            {
                printf("Stack is empty, no top element.\n");
            }
            else
            {
                printf("Top element is %d\n", s.items[s.top]);
            }
            break;

        case 6:
            printf("Exit operation is performed.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 6);

    return 0;
}
