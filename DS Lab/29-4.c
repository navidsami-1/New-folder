#include<stdio.h>
int main(){
    int g[4][4]= {0};
    g[0][1]=1;
    g[1][0]=1;
    g[0][2]=1;
    g[2][0]=1;
    g[1][3]=1;
    g[3][1]=1;
    g[2][3]=1;
    g[3][2]=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", g[i][j]);
    }
        printf("\n");
    }
    
}