#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, countG=0, countB=0, count=0;
        cin >> n;
        string c;
        cin >> c;
        
        
        for(int i=0; i<n; i++){
            if(c[i]== 'G'){
                countG++;
            }
            else{
                countB++;
            }
            count++;
            if(countB> 2*countG){
                break;;
            }
        }
        cout << count << endl;
    }
    return 0;
}
