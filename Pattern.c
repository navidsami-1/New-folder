#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            if(i%2!=0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    if(n%2==0){
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*n-1)-(2*i); k++){
            if(i%2!=0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}
if(n%2!=0){
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*n-1)-(2*i); k++){
            if(i%2==0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}

}