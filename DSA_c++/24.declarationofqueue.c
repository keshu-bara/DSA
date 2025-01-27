#include <stdio.h>
#define MAX 100 // Define the maximum size of the queue

// Queue structure
typedef struct {
    int items[MAX]; // Array to hold the queue elements
    int front;      // Index of the front element
    int rear;       // Index of the rear element
} Queue;

// Function to initialize the queue
void initQueue(Queue* q) {
    q->front = -1; // Front is initialized to -1
    q->rear = -1;  // Rear is initialized to -1
}

// Function to check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(Queue* q) {
    return q->rear == MAX - 1;
}

int main() {
    Queue q;
    initQueue(&q);

    // Example usage
    printf("Queue initialized.\n");
    printf("Is the queue empty? %s\n", isEmpty(&q) ? "Yes" : "No");

    return 0;
}
