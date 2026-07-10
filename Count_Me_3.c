#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i= 1; i <= t; i++) {
        char a[100001];
        int cc=0, cs=0, cd=0;
        scanf("%s", a);
        int l = strlen(a);
        for(int j = 0; j < l; j++) {
            if(a[j]>='a' && a[j]<='z') {
                cs++;
            }
            else if(a[j]>='A' && a[j]<='Z') {
                cc++;
            }
            else if(a[j]>='0' && a[j]<='9') {
                cd++;
            }
        }
        printf("%d %d %d\n", cc, cs, cd);
        
    }
    return 0;
}