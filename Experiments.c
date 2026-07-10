#include<stdio.h>

int main()
{
    int N, i=1, Amount, c=0, r=0, s=0, total=0;
    char ani;
    scanf("%d", &N);
    while(i<=N)
    {
        scanf("%d %c", &Amount, &ani);
        if(ani=='C')
            {
                c+=Amount;
                total+=Amount;
            }
        else if(ani=='R')
            {
                r+=Amount;
                total+=Amount;
            }
        else if(ani=='S')
            {
                s+=Amount;
                total+=Amount;
            }
        i++;
    }
    float pc, pr, ps;
    pc=(c*100.0)/total;
    pr=(r*100.0)/total;
    ps=(s*100.0)/total;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);
    return 0;
}