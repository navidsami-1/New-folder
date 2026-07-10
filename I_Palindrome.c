#include<stdio.h>
#include<string.h>
int main() {
    int n, palindrome=0;
    char a[1001];
    scanf("%s", a);
    n = strlen(a);
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