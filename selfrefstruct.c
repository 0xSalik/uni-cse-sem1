#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    printf("Self-referential structures in C:\n\n");
    printf("A self-referential structure is a structure that contains a pointer to itself.\n");
    printf("Example: Linked List Node\n\n");
    printf("struct Node {\n");
    printf("    int data;\n");
    printf("    struct Node* next;\n");
    printf("};\n\n");
    printf("The 'next' pointer points to another structure of the same type.\n");
    printf("This enables creation of data structures like:\n");
    printf("- Linked Lists\n");
    printf("- Binary Trees\n");
    printf("- Graphs\n");
    printf("- Stacks and Queues\n");

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    printf("\nExample: Created a node with data = %d\n", head->data);

    free(head);
    return 0;
}
