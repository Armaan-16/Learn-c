#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 1; // assign data to first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third; // Link second node with third

    third->data = 3; // assign data to third node
    third->next = NULL; // End of the linked list

    // Print the linked list
    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        printf("ptr address: %p\n", (void*)ptr);
        ptr = ptr->next;
    }
    printf("NULL\n");

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}