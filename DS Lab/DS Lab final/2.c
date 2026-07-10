#include<stdio.h>

int main(){
    int a[4][4]={0};
    a[0][1]=1;
    a[1][0]=1;
    a[0][2]=1;
    a[2][0]=1;
    a[3][1]=1;
    a[1][3]=1;
    a[3][2]=1;
    a[2][3]=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}