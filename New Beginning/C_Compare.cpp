#include<bits/stdc++.h>
using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;

    if (X <= Y)
        cout << X;
    else
        cout << Y;

    return 0;
}