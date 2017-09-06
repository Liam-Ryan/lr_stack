#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct lrstack_node {
    void *value;
    struct lrstack_node *next;
} lrstack_node;

//Caller is responsible for free()-ing any data structures stored as value
void *lrstack_pop(lrstack_node **head) {
    if (*head == NULL)
        return NULL;
    lrstack_node *oldHeadNode = *head;
    void *poppedValue = oldHeadNode->value;
    *head = oldHeadNode->next;
    free(oldHeadNode);
    return poppedValue;
}

void *lrstack_peek(lrstack_node **head) {
    if (*head == NULL)
        return NULL;
    return (*head)->value;
}

void lrstack_push(lrstack_node **head, void *value) {
    lrstack_node *newNode = malloc(sizeof(lrstack_node));
    newNode->value = value;
    newNode->next = *head;
    *head = newNode;
}

bool lrstack_isEmpty(lrstack_node **head) {
    return *head == NULL;
}