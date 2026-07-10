#include<stdio.h>
int main() {
    int x, y, time;
    scanf("%d %d", &x, &y);
    time = (x*30 + y*60);
    printf("%d\n", time);
    return 0;
}