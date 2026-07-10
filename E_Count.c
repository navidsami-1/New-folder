#include<stdio.h>
#include<string.h>
int main(){
    int sum=0;
    char str[1000001];
    scanf("%s", str);
    for(int i=0; str[i]!= '\0' ; i++){
        
        sum+=(str[i]-48);
    }
    printf("%d\n", sum);
    return 0;
}