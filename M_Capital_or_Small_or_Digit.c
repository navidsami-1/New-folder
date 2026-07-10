#include<stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    if(65<=x && x<=90){
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (x>=97 && x<=122)
    {
       printf("ALPHA\nIS SMALL\n"); 
    }
    else if (48<=x && x<=57)
    {
       printf("IS DIGIT\n"); 
    }
    
    
    
    return 0;
}