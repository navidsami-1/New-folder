#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>> t;
    while(t--){
        cin>> n>> k;
        int b[k], c[k];
        for(int i =0; i<k;i++){
            cin>> b[i]>> c[i];
        }
        int max_earn=0;
        for(int i=0; i<k;i++){
            if(b[i]<=n && b[i]<=k){
                max_earn+= c[i];
            }
        }
        cout<< max_earn<< endl;
    }
}