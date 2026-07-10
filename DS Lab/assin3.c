#include<stdio.h>
int main(){
    int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x=7,count=0;
    for(int i =x-1; i<15-1; i++){
        a[i]=a[i+1];
        count++;
    }
    for(int i=0; i<15; i++){
        printf("%d ", a[i]);
    }
    printf("\n%d", count);
}