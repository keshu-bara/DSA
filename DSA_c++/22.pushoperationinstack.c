#include <stdio.h>
#define MAX 100 // Define the maximum size of the stack

// Stack structure
typedef struct {
    int items[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack* s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack* s, int element) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++(s->top)] = element;
    printf("Pushed %d onto the stack\n", element);
}

// Main function to demonstrate push operation
int main() {
    Stack s;
    initStack(&s);

    // Example push operations
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    return 0;
}
