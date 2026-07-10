#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int x[n], min, j;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    min=x[0];
    j=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<min)
           { min=x[i];
            j=i;
           }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",j);
    return 0;
}