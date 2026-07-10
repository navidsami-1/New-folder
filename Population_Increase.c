#include <stdio.h>
 
int main() {
 
    int t;
    scanf("%d", &t);
    while(t>0)
    {
        int pa, pb, year=0;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa<=pb && year<=100)
        {
            pa+=pa*g1/100.0;
            pb+=pb*g2/100.0;
            year++;
        }
        if(year>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", year);
        t--;
    }
    return 0;
}