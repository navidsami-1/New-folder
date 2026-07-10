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
    double sum1=0, sum2=0, count1=0, count2=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j<5){
                sum1+=m[i][j];
                count1++;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=5;j<12;j++)
        {
            if(i+j<11){
                sum2+=m[i][j];
                count2++;
            }
        }
    }
    if(t=='S')
        printf("%.1lf\n",sum1+sum2);
    if(t=='M')
        printf("%.1lf\n",(sum1+sum2)/(count1+count2));
    return 0;
}