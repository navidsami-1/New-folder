#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    int con [n][n];
    memset(con,0,sizeof(con));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==j){
                con[i][j] = 1;
            }
        }
    }

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin >> a >> b;
        con[a][b] = 1;
    }
    int q;
    cin>> q;
    while(q--){
        int a,b;
        cin>> a >>b;
        if(con[a][b]==1){
            cout<< "YES"<< endl;
        }
        else{
            cout<< "NO"<< endl;
        }
    }

    
    return 0;
}