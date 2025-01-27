// C Program to insert the node at the beginning of
// Linked List

#include <stdio.h>
#include <stdlib.h>

// Define a node in the linked list
struct Node {
    int data; // Data stored in the node
    struct Node*
        next; // Pointer to the next node in the list
};

// Function to create a new node with the given data
struct Node* createNode(int new_data)
{
    // Allocate memory for a new node
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    // Initialize the node's data
    new_node->data = new_data;

    // Set the next pointer to NULL
    new_node->next = NULL;

    // Return the newly created node
    return new_node;
}

// Function to insert a new node at the beginning of the
// list
struct Node* insertAtFront(struct Node* head, int new_data)
{
    // Create a new node with the given data
    struct Node* new_node = createNode(new_data);

    // Make the next of the new node point to the current
    // head
    new_node->next = head;

    // Return the new node as the new head of the list
    return new_node;
}

// Function to print the contents of the linked list
void printList(struct Node* head)
{
    // Start from the head of the list
    struct Node* curr = head;

    // Traverse the list
    while (curr != NULL) {
        // Print the current node's data
        printf(" %d", curr->data);

        // Move to the next node
        curr = curr->next;
    }

    // Print a newline at the end
    printf("\n");
}

// Driver code to test the functions
int main()
{
    // Create the linked list 2->3->4->5
    struct Node* head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);

    // Print the original list
    printf("Original Linked List:");
    printList(head);

    // Insert a new node at the front of the list
    printf("After inserting Nodes at the front:");
    int data = 1;
    head = insertAtFront(head, data);

    // Print the updated list
    printList(head);

    return 0;
}