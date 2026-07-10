#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> l;
    string s;
    int q;
    while(cin>>s && s!="end"){
        l.push_back(s);
    }
    auto curr = l.begin();
    cin>>q;
    cin.ignore();
    while(q--){
        string op;
        
        getline(cin,op);
        if(op == "prev") {
            if(curr == l.begin()) {
                cout << "Not Available" << endl;
            } else {
                --curr;
                cout << *curr << endl;
            }
        }
        else if(op == "next") {
            auto next = curr;
            ++next;
            if(next == l.end()) {
                cout << "Not Available" << endl;
            } else {
                ++curr;
                cout << *curr << endl;
            }
        }
        else if(op.substr(0,5) == "visit") {
            string addr = op.substr(6);
            auto it = find(l.begin(), l.end(), addr);
            if(it == l.end()) {
                cout << "Not Available" << endl;
            } else {
                curr = it;
                cout << *curr << endl;
            }
        }
    }
}