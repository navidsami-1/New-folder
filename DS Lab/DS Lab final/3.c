#include<stdio.h>
int q[10];
int f=-1, r=-1;
int insert(int value){
    if(r==10){
        printf("Overflow");
        return 0;
    }
    else{
        q[++r]= value;
    }
    if(f==-1){
        ++f;
    }
    return 0;
}
int del(){
    int item;
    if(f==-1|| f>r){
        printf("Underflow");
        return 0;
    }
    else{
        item= q[f];
        ++f;
    }
    printf("%d is deleted\n", item);
    return 0;
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    del();
    for(int i=f; i<=r; i++){
        printf("%d ", q[i]);
    }
    return 0;
}