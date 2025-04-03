// This program implements a stack using a linked list in C
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL; // Initialize top to NULL

void push(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d\n", x);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
    printf("Popped\n");
}
int main()
{
    push(10);
    push(20);
    pop();
    pop();
    pop(); // This will cause stack underflow
    return 0;
}