#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

    Node* insertAtBeginning(Node* head, int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to reverse the singly linked list
    Node* reverseLinkedList(Node* head) 
    {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) 
    {
        next = current->next; // Store the next node
        current->next = prev; // Change the next of the current node

        // Move pointers one position ahead
        prev = current;
        current = next;
    }

    head = prev; // Update the head to point to the new first node (previously the last node)
    return head;
}

// Function to display the linked list
    void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) 
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    int choice, data;

    do {
        printf("\n1. Insert at the beginning");
        printf("\n2. Reverse the linked list");
        printf("\n3. Display the linked list");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                break;
            case 2:
                head = reverseLinkedList(head);
                printf("Linked list reversed!\n");
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    } while (1);

    return 0;
}
