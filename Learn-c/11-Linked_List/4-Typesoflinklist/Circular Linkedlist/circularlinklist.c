#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traverse(struct Node* head) {
    struct Node* ptr = head;
    do {
        printf("%d -> ", ptr->data);
        printf("ptr address: %p\n", (void*)ptr);
        ptr = ptr->next;
    } while (ptr != head);
}   



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
    third->next = head; // Link third node back to head to make it circular
    // Print the circular linked list
    traverse(head);
    

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}