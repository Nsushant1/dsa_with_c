#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};
struct Node* front = NULL; // Initialize head to NULL
struct Node* rear = NULL; // Initialize tail to NULL

void Enqueue(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (rear == NULL) { // If queue is empty
        front = rear = newNode;
        return;
    }
    rear->next = newNode; // Link the old rear to the new node
    rear = newNode; // Update rear to the new node
}
void Dequeue() {
    if (front == NULL) { // If queue is empty
        printf("Queue Underflow\n");
        return;
    }
    struct Node* temp = front; // Store the front node
    front = front->next; // Move front to the next node
    if (front == NULL) // If queue becomes empty
        rear = NULL;
    free(temp); // Free the old front node
}
int main() {
    Enqueue(10);
    Enqueue(20);
    Dequeue();
    Dequeue();
    Dequeue(); // This will cause queue underflow
    return 0;
}


