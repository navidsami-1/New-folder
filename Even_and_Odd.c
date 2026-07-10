#include<stdio.h>
void odd_even(){
    int n, e=0, od=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            od++;
        }
    }
    printf("%d %d\n", e, od);
}
int main(){
    odd_even();
    return 0;
}