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

// Function to check if the queue is empty
int isEmpty(CircularQueue* q) {
    return q->front == -1;
}

// Function to delete an element from the circular queue
int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1; // Return -1 to indicate underflow
    }
    int element = q->items[q->front];
    if (q->front == q->rear) {
        // Queue becomes empty after removing the last element
        q->front = q->rear = -1;
    } else {
        // Move front forward circularly
        q->front = (q->front + 1) % MAX;
    }
    return element;
}

// Main function to demonstrate deletion in a circular queue
int main() {
    CircularQueue q;
    initQueue(&q);

    // Insert elements manually for demonstration
    q.front = 0;
    q.rear = 4;
    q.items[0] = 10;
    q.items[1] = 20;
    q.items[2] = 30;
    q.items[3] = 40;
    q.items[4] = 50;

    // Deleting elements from the queue
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    // Trying to dequeue when the queue becomes empty
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}
