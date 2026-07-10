#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val = val;
            next = NULL;
        }
};
void add_head(Node* &head, Node* &tail, int val) { 
    Node* newNode = new Node(val); 
    if (head == NULL) { 
        head = tail = newNode; 
    } 
    else { 
        newNode->next = head;
        head = newNode;
    } 
}
void add_tail(Node* &head, Node* &tail, int val) { 
    Node* newNode = new Node(val); 
    if (head == NULL) { 
        head = tail = newNode; 
    } 
    else { 
        tail->next = newNode;
        tail = newNode; 
    } 
}
void delete_head(Node* &head, Node* &tail) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    delete temp;
}
void delete_any_pos(Node* &head, Node* &tail, int v) {
    if (head == NULL){
        return; 
    }
    Node* temp = head;
    for(int i=1; i<v && temp->next!= NULL; i++) {
        temp = temp->next;
    }
    if (temp->next == NULL){
        return;
    }
    Node* dnode = temp->next;     
    temp->next = dnode->next;
    if (dnode == tail) {
        tail = temp;
    }
    delete dnode; 
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    int q;
    cin >> q;
    Node* head = NULL;
    Node* tail = NULL;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            add_head(head, tail, v);
        } 
        else if (x == 1) {
            add_tail(head, tail, v);
        } 
        else if (x == 2) {
            if (v==0) {
                delete_head(head, tail);
            } 
            else {
                delete_any_pos(head, tail, v);
            }
        }

        print_list(head);
        cout << endl;
    }

}