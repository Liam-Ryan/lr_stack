#include <stdio.h>
#include <stdlib.h>
#include "../stack/lr_stack.h"

int main() {

    void popAndPrint(lrstack_node **head) {
        fprintf(stdout, "\nPopped value %d", (int)lrstack_pop(head));
    }

    void peekAndPrint(lrstack_node **head) {
        fprintf(stdout, "\nTop value %d", (int)lrstack_peek(head));
    }

    void printEmpty(lrstack_node **head) {
        fprintf(stdout, "\nStack is empty - %s", lrstack_isEmpty(head) ? "true" : "false");
    }

    lrstack_node *head = NULL;

    lrstack_push(&head, (void*) 8);
    lrstack_push(&head, (void*) 10);
    printEmpty(&head);
    peekAndPrint(&head);
    popAndPrint(&head);
    printEmpty(&head);
    popAndPrint(&head);
    printEmpty(&head);
    popAndPrint(&head);
    free(head);
}
