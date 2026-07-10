#include<stdio.h>
int main() {
    int n, palindrome=0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0, j=n-1; i < j; i++, j--) {
        if(a[i] != a[j]) {
            printf("NO\n");
            break;
        }
        else {
            palindrome++;
        }
    }
    if(palindrome== n/2){
        printf("YES\n"); 
    }
}