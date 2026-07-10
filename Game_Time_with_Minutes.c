#include <stdio.h>
 
int main() {
 
    int a1, b1, a2, b2, h, m;
    scanf("%d %d %d %d", &a1, &b1, &a2,&b2);
    if(a1==a2 && b1==b2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a1>a2 && b1>b2)
    {
        h= (23+a2)-a1;
        m= (60+b2)-b1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(a1<a2 && b1>b2)
    {
        h= (a2-1)-a1;
        m= (60+b2)-b1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(a1<a2 && b1<b2)
    {
        h= (a2)-a1;
        m= (b2)-b1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(a1>a2 && b1<b2)
    {
        h= (24+a2)-a1;
        m= (b2)-b1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
 
    return 0;
}