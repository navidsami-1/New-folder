#include<stdio.h>
int main() {
    int n, neg = 0, pos = 0, even = 0, odd = 0, x;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        if(x < 0){
            neg++;
        }
        if(x > 0){
            pos++;
        }
        if(x % 2 == 0){
            even++;
        }
        if(x % 2 != 0){
            odd++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}