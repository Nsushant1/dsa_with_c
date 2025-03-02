#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *head = NULL;

void push()
{
    int value;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("\nMemory allocation failed. Stack Overflow.\n");
        return;
    }
    printf("\nEnter value to push: ");
    scanf("%d", &value);
    newNode->val = value;
    newNode->next = head;
    head = newNode;
    printf("\n%d pushed onto stack.\n", value);
}

void pop()
{
    if (head == NULL)
    {
        printf("\nStack Underflow! No elements to pop.\n");
        return;
    }
    struct node *temp = head;
    printf("\nPopped element: %d\n", head->val);
    head = head->next;
    free(temp);
}

void display()
{
    if (head == NULL)
    {
        printf("\nStack is empty!\n");
        return;
    }
    struct node *temp = head;
    printf("\nStack elements are: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    printf("\n***** Stack operations using linked list *****\n");
    printf("-------------------------------------------\n");

    while (1)
    {
        printf("\n\nChoose an option:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
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
            printf("\nExiting program.\n");
            exit(0);
        default:
            printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }
    }
    return 0;
}
