#include<stdio.h>
#include<string.h>

int main() {
    char a[10001];
    char f[27];
    f[0]= 'a';
    for(int i = 1; i < 27; i++) {
        f[i]= f[i-1]+1;
    }
    scanf("%s", a);
    int l = strlen(a);
    for(int i = 0; i < 27; i++) {
        int count=0;
        for(int j = 0; j < l; j++) {
            if(a[j]== f[i]){
                count++;
            }
        }
        if(count){
            printf("%c - %d\n", f[i], count);
        }
    }
    return 0;
}