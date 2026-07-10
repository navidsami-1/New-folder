#include<stdio.h>
#include<string.h>
int main() {
    int n;
    int sum= 0;
    scanf("%d", &n);
    char a[n];
    for(int i = 0; i < n; i++) {
        scanf("%s", &a[i]);
        sum += a[i]- 48;
    }
    printf("%d\n", sum);
}