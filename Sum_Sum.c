#include<stdio.h>
int main() {
    int n, x, sp=0, sn=0;
    scanf("%d\n", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d ", &x);
        if(x>0){
            sp+=x;
        }
        else{
            sn+=x;
        }
        
    }
    printf("%d %d\n", sp, sn);
    return 0;
}