#include<stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c < 'z'){
        char n= c + 1;
        printf("%c\n", n);
    }
    if(c == 'z'){
        printf("a\n");
    }
    return 0;
}