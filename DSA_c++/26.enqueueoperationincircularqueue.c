#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Define the maximum size of the queue

// Circular Queue structure
typedef struct {
    int items[MAX];
    int front, rear;
} CircularQueue;

// Function to initialize the circular queue
void initQueue(CircularQueue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(CircularQueue* q) {
    return (q->rear + 1) % MAX == q->front;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue* q) {
    return q->front == -1;
}

// Function to insert an element into the circular queue
void enqueue(CircularQueue* q, int element) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0; // Set front to 0 if inserting the first element
    }
    q->rear = (q->rear + 1) % MAX; // Move rear forward circularly
    q->items[q->rear] = element;
    printf("Enqueued %d\n", element);
}

// Main function to demonstrate insertion in a circular queue
int main() {
    CircularQueue q;
    initQueue(&q);

    // Inserting elements into the circular queue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); // Queue is now full

    // Trying to enqueue when the queue is full
    enqueue(&q, 60); // Should show "Queue Overflow"

    return 0;
}
