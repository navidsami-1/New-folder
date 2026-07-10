#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> con[n];
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        con[a].push_back(b);
        con[b].push_back(a);
    }
    int q;
    cin>> q;
    while(q--){
        int x;
        cin >> x;
        sort(con[x].begin(),con[x].end());
        reverse(con[x].begin(),con[x].end());
        if(con[x].size()!=0){
            for(int b : con[x]){
                cout << b << " ";
            }
        }
        else{
            cout<< "-1" ;
        }
        cout << endl;
    }
    return 0;
}