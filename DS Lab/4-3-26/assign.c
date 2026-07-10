#include<stdio.h>
#define MAX 10 
struct node {
    char info; int link; 
}; 
struct node list[MAX];

int start = -1; 
int avail = 0;  
void initialize() {
    for(int i = 0; i < MAX-1; i++) {
        list[i].link = i + 1;
    }
    list[MAX-1].link = -1;
}
int getNode() {
    if(avail == -1)
        return -1;

    int p = avail;
    avail = list[avail].link;
    return p;
}
void insertEnd(char data) {
    int newNode = getNode();

    if(newNode == -1) {
        printf("Overflow!\n");
        return;
    }

    list[newNode].info = data;
    list[newNode].link = -1;

    if(start == -1) {
        start = newNode;
    } else {
        int temp = start;
        while(list[temp].link != -1) {
            temp = list[temp].link;
        }
        list[temp].link = newNode;
    }
}
void display() {
    int temp = start;

    while(temp != -1) {
        printf("%c -> ", list[temp].info);
        temp = list[temp].link;
    }
    printf("NULL\n");
}
void insertBeginning(char data) {

    int newNode = getNode();

    if(newNode == -1) {
        printf("Overflow!\n");
        return;
    }

    list[newNode].info = data;
    list[newNode].link = start;

    start = newNode;
}
void deleteEnd() {

    if(start == -1) {
        printf("Underflow!\n");
        return;
    }

    int temp = start;
    int prev = -1;


    if(list[start].link == -1) {
        avail = start;
        start = -1;
        return;
    }

    while(list[temp].link != -1) {
        prev = temp;
        temp = list[temp].link;
    }

    list[prev].link = -1;
    list[temp].link = avail;
    avail = temp;
}
int main() {

    initialize();

    insertEnd('L');
    insertEnd('I');
    insertEnd('N');
    insertEnd('K');
    insertEnd('E');
    insertEnd('D');

    display();
    insertBeginning('S');
    display();
    deleteEnd();
    display();
    return 0;
}