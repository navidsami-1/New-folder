#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n<3){
            cout<< "NO"<< endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]==s){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1){
            cout<<"YES"<< endl;
        } else {
            cout<<"NO"<< endl;
    }
}
    return 0;
}