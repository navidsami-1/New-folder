#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

void add_node(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void rmv_dup(Node* head) {
    Node* curr = head;

    while (curr != NULL) {
        Node* prev = curr;
        Node* temp = curr->next;

        while (temp != NULL) {
            if (temp->val == curr->val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        curr = curr->next;
    }
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        add_node(head, tail, val);
    }

    rmv_dup(head);
    print_list(head);
}
