#include<stdio.h>
int main() {
    int n;
    long long sum = 0;
    scanf("%d\n", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
        sum = sum + a[i];
    }
    if(sum <= -1) {
            sum = -sum;
        }
        printf("%lld\n", sum);
    return 0;
}