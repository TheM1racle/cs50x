#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void printList(node *list);

int main(void)
{
    //create poiner to the start of our list
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    
    n->number = 1;
    n->next = NULL;
    list = n;

    node *n2 = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n2->number = 2;
    n2->next = NULL;
    list->next = n2;

    
    
    printList(list); 
    
    
}

void printList(node *list) {
    node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
    }