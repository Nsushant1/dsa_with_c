#include <stdio.h>
#define MAX 100

typedef struct
{
    int top;
    int arr[MAX];
} Stack;

void init(Stack *s) { s->top = -1; }
int isEmpty(Stack *s) { return s->top == -1; }
int isFull(Stack *s) { return s->top == MAX - 1; }

void push(Stack *s, int x)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = x;
}

int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int peek(Stack *s)
{
    return isEmpty(s) ? -1 : s->arr[s->top];
}

int main()
{
    Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    printf("Top: %d\n", peek(&s));
    pop(&s);
    printf("Top after pop: %d\n", peek(&s));
    return 0;
}