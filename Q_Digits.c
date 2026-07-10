#include<stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        int j=x;
        if (x==0) {
            printf("0\n");
            continue;
        }
        while(j > 0){
            int temp=j % 10;
            j=j/10;
            printf("%d ", temp);
        }
        printf("\n");
    }
    return 0;
}
