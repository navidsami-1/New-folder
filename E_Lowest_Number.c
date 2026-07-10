#include<stdio.h>
int main() {
    int n, min;
    scanf("%d\n", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == min) {
            printf("%d %d\n", a[i], i+1);
            break;
        }
    }
    return 0;
}