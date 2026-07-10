#include <stdio.h>
 
int main() {
 
    int m, n, sum=0;
    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m<=0 || n<=0) break;
        if (m>n)
        {
            for (int i=n; i<=m; i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        }
        else
        {
            for (int i=m; i<=n; i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        
    }
    printf("Sum=%d\n", sum);
        sum=0;
    }
    return 0;
}