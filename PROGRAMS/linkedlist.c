#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
 
};


// Function to reverse the linked list
void reverse(struct Node** head_ref) {
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead
        prev = current;
        current = next;
    }

    *head_ref = prev;
}

// Function to insert a node at the beginning of the linked list
void insert(struct Node** head_ref, int new_data) {
    // Allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to the new node
    new_node->data = new_data;

    // Make next of new node as head
    new_node->next = (*head_ref);

    // Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to delete the first occurrence of a given key in the linked list
void delete(struct Node** head_ref, int key) {
    // Store head node
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;  // Changed head
        free(temp);              // Free old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in the linked list
    if (temp == NULL) return;

    // Unlink the node from the linked list
    prev->next = temp->next;

    free(temp);  // Free memory
}

// Function to print the linked list
void display(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to test the linked list operations
int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    printf("Linked list after insertion: ");
    display(head);

    // Delete an element from the linked list
    delete(&head, 3);

    printf("Linked list after deletion of 3: ");
    display(head);
    reverse(&head);
    display(head);
    return 0;
}


