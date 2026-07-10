#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int x= 3, ele=60, count=0;
    for(int i=10-1; i>=x; i--){
        a[i+1]=a[i];
        
        count++;
    }
    a[x-1]=ele;
    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n%d", count);
}
