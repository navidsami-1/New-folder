#include<stdio.h>
int main() {
    int t, m1 , m2, d;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
    scanf("%d %d %d", &m1, &m2, &d);
    int new= (m1*d)/(m1+m2);
    int few= d- new;
    printf("%d\n", few);
    }

    
}