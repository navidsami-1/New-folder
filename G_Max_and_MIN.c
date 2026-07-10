#include<stdio.h>
void max(int a[], int n){
    int max=a[0], min=a[0];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d %d", min, max);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max(a,n);
    return 0;
}