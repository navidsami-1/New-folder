#include <stdio.h>
 
int main() {
    double m[12][12];
    char t;
    scanf(" %c", &t);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    double sum=0, count=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(i+j>=11){
                sum+=m[i][j];
                count++;
            }
        }
    }
    if(t=='S')
        printf("%.1lf\n",sum);
    if(t=='M')
        printf("%.1lf\n",sum/count);
    return 0;
}