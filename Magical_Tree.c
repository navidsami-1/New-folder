#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);;
    int s=(11+n)/2;
    for(int i=1; i<=s; i++){
        for(int j=1; j<=s-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            printf(" ");
        }
        for(int k=1; k<=n; k++){
            printf("*");
        }
        printf("\n");
    }
}
