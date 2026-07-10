#include<stdio.h>
#include<string.h>
int main() {
    char a[101];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", a);
        if(strlen(a) > 10) {
            printf("%c%d%c\n", a[0], strlen(a)-2, a[strlen(a)-1]);
        }
        else {
            printf("%s\n", a);
        }
    }
}