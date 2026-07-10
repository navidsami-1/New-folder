#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void print_for(Node* head)
{
    cout << "L -> ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_rev(Node* tail)
{
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_any_pos(Node* head,int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main() {
    int q;
    cin>>q;
    int sz = 0;
    Node* head = NULL;
    Node* tail = NULL;
    while(q--){
        int v, x;
        cin>>x>>v;
        if (sz == 0)
        {
            if (x != 0)
            {
                cout << "Invalid\n";
                continue;
            }
            head = tail = new Node(v);
            sz++;
            print_for(head);
            print_rev(tail);
        }
        else
        {
            if (x < 0 || x > sz)
            {
                cout << "Invalid\n";
                continue;
            }

            if (x == 0)
            {
                insert_at_head(head, tail, v);
            }
            else if (x == sz)
            {
                insert_at_tail(head, tail, v);
            }
            else
            {
                insert_at_any_pos(head, x, v);
            }

            sz++;
            print_for(head);
            print_rev(tail);
        }
        
    }
}