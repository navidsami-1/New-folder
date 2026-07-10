#include<stdio.h>
#include<string.h>
int is_palindrome(char a[],int len){
    int pal=1 ;
    for(int i=0; i<=len; i++){
        if(i<len-1-i){
            if(a[i]==a[len-1-i]){
                pal= 1;
            }
            else{
                pal= 0;
                break;
            }
        }
        
        
    }
    return pal;
}
int main(){
    char a[1001];
    scanf("%s", a);
    int c= is_palindrome(a, strlen(a));
    if(c==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}