#include<stdio.h>
int print(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i>1){
            printf(" ");
        }
        printf("%d", i);
    }
}
int main(){
  
    print();
    return 0;
}