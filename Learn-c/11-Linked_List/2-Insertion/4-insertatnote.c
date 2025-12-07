#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertafternode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    // Insert at index
    head = insertafternode(head, third, 69);


    // Print linked list
    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        printf("ptr address: %p\n", (void*)ptr);
        ptr = ptr->next;
    }
    printf("NULL\n");

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
