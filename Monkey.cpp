// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char s[100001];
//     while(cin.getline(s,100001)){
//         int l=strlen(s);
//         sort(s,s+l);
//         char am[100001];
//         int m=0;
//     for(int i=0;i<l;i++){
//         if(s[i]!=' '){
//             am[m]=s[i];
//             m++;
//         }
//         else if(s[i]>='a' && s[i]<='z'){
//             am[m]=s[i];
//             m++;
//         }

//     }
//     cout<<am<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[100001];

    while (cin.getline(s, 100001)) {
        int l = strlen(s);
        char am[100001];
        int m = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] != ' ') {
                am[m++] = s[i];
            }
        }
        sort(am, am + m);
        am[m] = '\0';

        cout <<am <<endl;
    }
}
