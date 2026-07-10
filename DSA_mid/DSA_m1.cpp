#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
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