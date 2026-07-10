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
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }

};
class myStack
{
    public:
        vector<int> v;
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        
        bool empty()
        {
            return v.empty();
        }
};
int main() {
    myStack s;
    myQueue q;
    int n, m;
    bool flag = true;
    cin >> n >> m;
    if(n > m|| m> n) {
        cout<< "NO"<< endl;
        return 0;
    }
    
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }
    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!s.empty() && !q.empty()) {
        if(s.top() != q.front()) {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }
    if(flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}