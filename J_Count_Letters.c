#include<stdio.h>
#include<string.h>
int main() {
    
    char a[51];
    scanf("%s", a);
    int n = strlen(a);
    char f[n+1];
    for (int i = 0; i <= m; i++) {
        f[i] = ;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        f[a[i]]++;
    }
    for(int i = 1; i <= m; i++) {
        printf("%d\n", f[i]);
    }
    return 0;
    
    
}