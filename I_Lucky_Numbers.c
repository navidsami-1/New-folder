#include<stdio.h>
int main() {
    int n, a,b;
    scanf("%d", &n);
    a= n/10;
    b= n%10;
    
        if(b%a==0 || a%b==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    
    return 0;
}