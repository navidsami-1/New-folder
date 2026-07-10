#include<stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if(r==c){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(i==j || i+j==r-1){
                if (a[i][j]!=1){
                    printf("NO\n");
                    return 0;  
                }
                
            }
            else if((i!=j && i+j!=r-1)){
                if(a[i][j]!=0){
                    printf("NO\n");
                      return 0;  
                    }
            }
        }
            
    }
    printf("YES\n");
    }
    if(r!=c){
        printf("NO\n");
    }
    
    return 0;
}
