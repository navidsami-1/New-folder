#include<stdio.h>
#include<string.h>
int main(){
    char str[1000000];
    fgets(str, 1000000, stdin); 
    for(int i=0; i<1000000; i++){
        if(str[i]=='\\')
        {
            break;
        }
        printf("%c", str[i]);
    }
    return 0;
}