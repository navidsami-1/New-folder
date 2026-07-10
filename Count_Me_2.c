#include<stdio.h>
#include<string.h>
int main() {
    int count=0;
    char a[100001];
    scanf("%s", a);
    int l = strlen(a);
    for(int i = 0; i < l; i++) {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
            // count++;
        }
        else {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
    
}