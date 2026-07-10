#include<stdio.h>
int main() {
    int x, d;
    scanf("%d %d", &x, &d);
    if(2*x<=d){
        printf("double it\n");
    }
    else{
        printf("take it\n");
    }
     
    return 0;
}