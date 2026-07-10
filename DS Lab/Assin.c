#include<stdio.h>
int main(){
    int a[20]={10,20,30,40,50,60,70,80,100,1,2,3,4,5,6,7,8,9,10};
    int t=90, flag= 0, count=0;
    for(int i = 0; i<20; i++){
        count++;
        if(a[i]==t){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Target is found\n");
    }
    else{
        printf("not found\n");    
    }
    printf("%d", count);
}