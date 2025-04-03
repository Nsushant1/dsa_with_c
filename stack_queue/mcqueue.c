#include <stdio.h>

#define MAX_SIZE 101

int A[MAX_SIZE];          // Array to store the queue
int front = 0, rear = -1; // Front starts at 0, rear at -1

// Enqueue operation to insert an element at the rear of the queue
void Enqueue(int x)
{
    if (rear == MAX_SIZE - 1)
    { // Overflow condition
        printf("Error: Queue is full\n");
        return;
    }
    rear++;
    A[rear] = x;
}

// Dequeue operation to remove an element from the front of the queue
void Dequeue()
{
    if (front > rear)
    { // Underflow condition
        printf("Error: Queue is empty\n");
        return;
    }
    front++;

    // Reset queue when empty
    if (front > rear)
    {
        front = 0;
        rear = -1;
    }
}

// Front operation to return the element at the front of the queue
int Front()
{
    if (front > rear)
    {
        printf("Error: Queue is empty\n");
        return -1;
    }
    return A[front];
}

// Check if queue is empty
int IsEmpty()
{
    return (front > rear);
}

// Check if queue is full
int IsFull()
{
    return (rear == MAX_SIZE - 1);
}

// Print function to display queue elements
void Display()
{
    if (IsEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    // Perform operations
    Enqueue(2);
    Enqueue(5);
    Enqueue(10);
    Dequeue();
    Enqueue(12);
    Enqueue(15);
    Dequeue();

    // Display final queue state
    Display();

    return 0;
}
