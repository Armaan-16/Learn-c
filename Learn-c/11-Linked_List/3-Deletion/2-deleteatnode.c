#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteatindex(struct Node *head, int index)
{
    if (index == 0) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 1; i < index && q != NULL; i++) {
        p = p->next;
        q = q->next;
    }

    if (q == NULL) return head;

    p->next = q->next;
    free(q);
    return head;
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    
    head = deleteatindex(head, 1); 

    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        printf("ptr address: %p\n", (void*)ptr);
        ptr = ptr->next;
    }
    printf("NULL\n");

    free(head);
    free(second); 
    free(third);  

    return 0;
}
