#include<stdio.h>

int main(){
    int a[8]={10, 20, 30, 40, 50, 60, 70 , 80};
    int l= 0, r=7, item= 30, flag=0;
    while(l<=r){
        int m= (l+r)/2;
        if(item==a[m]){
            flag=1;
            break;
        }
        else if(item<a[m]){
            r=m-1;
        }
        else if(item>a[m]){
            l=m+1;
        }
    }
    if(flag==1){
        printf("%d is found", item);
    }
    else{
        printf("%d is not found", item);
    }
}