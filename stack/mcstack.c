// Stack - Array based implementation.
// Creating a stack of integers.
#include <stdio.h>

#define MAX_SIZE 101

int A[MAX_SIZE]; // integer array to store the stack
int top = -1;    // variable to mark top of stack in array

// Push operation to insert an element on top of stack.
void Push(int x)
{
    if (top == MAX_SIZE - 1)
    { // Overflow case.
        printf("Error: Stack Overflow\n");
        return;
    }
    top++;
    A[top] = x; // Increment top and insert element at top.
}

// Pop operation to remove an element from top of stack.
void Pop()
{
    if (top == -1)
    { // If stack is empty, pop should throw an error.
        printf("Error: No element to pop\n");
        return;
    }
    top--; // Decrement top to remove element from top.
}

// Top operation to return element at top of stack.
int Top()
{
    if (top == -1)
    {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return A[top];
}

// Function to check if stack is empty
int IsEmpty()
{
    return (top == -1);
}

// Function to check if stack is full
int IsFull()
{
    return (top == MAX_SIZE - 1);
}

// Function to display all elements in the stack.
void Display()
{
    if (IsEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    // Code to test the implementation.
    Push(2);
    Push(5);
    Push(10);
    Pop();
    Push(12);

    // Display the final state of the stack at the end.
    Display();

    return 0;
}
