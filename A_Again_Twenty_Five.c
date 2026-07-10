#include<stdio.h>
int main(){
    long long n, r=5;
    scanf("%lld", &n);
    for(int i=1; i<=n; i++){
        r *= 5;
    }
    printf("%lld\n", r%100);
}