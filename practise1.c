#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printlinkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("DATA = %d \n", ptr->data);
        ptr = ptr->next;
    }
    printf(" \n");
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->data = 5;
    first->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = NULL;
    printlinkedlist(first);
}