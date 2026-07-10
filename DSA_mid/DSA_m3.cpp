#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        stack<char> s;
        stack<char> temp;
        string str;
        cin >> str;
        for(char c : str) {
            s.push(c);
        }
        
        while(!s.empty()) {
            
            if(!temp.empty() && s.top() != temp.top()) {
                s.pop();
                temp.pop();
            } else {
                temp.push(s.top());
                s.pop();
            }
        }
        if(temp.empty() && s.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}