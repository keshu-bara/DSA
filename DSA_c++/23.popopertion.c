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

// Function to check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Function to pop an element from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1; // Return -1 to indicate underflow
    }
    return s->items[(s->top)--];
}

// Main function to demonstrate pop operation
int main() {
    Stack s;
    initStack(&s);

    // Example: Pushing elements to the stack
    s.items[++(s.top)] = 10;
    s.items[++(s.top)] = 20;
    s.items[++(s.top)] = 30;

    // Popping elements from the stack
    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s)); // Attempting to pop from an empty stack

    return 0;
}
