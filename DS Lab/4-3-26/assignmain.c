#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node nodes[50];
int idx = 0;

void traverse(struct Node *head)
{
    struct Node *tmp = head;
    printf("Linked List: ");
    while (tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("-1\n");
}

struct Node *insertAtTheBegining(struct Node *head, int val)
{
    struct Node *newNode = &nodes[idx++];
    newNode->data = val;
    newNode->next = head;

    return newNode;
}

struct Node *deleteAtTheEnd(struct Node *head)
{
    struct Node *tmp = head;
    struct Node *prev = NULL;

    if (tmp->next == NULL)
    {
        return NULL;
    }

    while (tmp->next != NULL)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = NULL;
    return head;
}

int main()
{
    struct Node *head = NULL;
    head = insertAtTheBegining(head, 100);
    head = insertAtTheBegining(head, 200);
    head = insertAtTheBegining(head, 300);
    head = insertAtTheBegining(head, 400);
    head = insertAtTheBegining(head, 500);
    head = insertAtTheBegining(head, 600);
    head = insertAtTheBegining(head, 700);
    head = insertAtTheBegining(head, 800);
    head = insertAtTheBegining(head, 900);
    
    traverse(head);

    head = deleteAtTheEnd(head);

    traverse(head);
    return 0;
}