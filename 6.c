#include <stdio.h>
 
int main() {
 
    int i=2, sum=0, n;
    scanf("%d", &n);
    while (i<=n)
    {
        sum+=i;
        i+=2;
    }
    printf("%d\n",sum);
    return 0;
}