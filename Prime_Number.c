#include <stdio.h>
 
int main() {
 
    int t;
    scanf("%d", &t);
    while(t>0)
    {
        int n, i=1, count=0;
        scanf("%d", &n);
        while(i<=n)
        {
            if(n%i==0)
                count++;
            i++;
        }
        if(count==2)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n", n);
        t--;
    }
    return 0;
}