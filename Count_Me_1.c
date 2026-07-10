#include<stdio.h>
#include<string.h>
int main() {
    int n, c2=0, c3=0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0 && a[i]%3==0){
            c2++;
        }
        else if(a[i]%2==0){
            c2++;
        }
        else if(a[i]%3==0){
            c3++;
        }
    }
    printf("%d %d\n", c2, c3);
    return 0;
    
    
}