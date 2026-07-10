#include <stdio.h>

int main() {
    int count=0;
    double num;
    scanf("%lf",&num);
    
        // if(num<0){
        //     num=-num;
        //     printf("-");
        // }
        if(num>0){
            num=num;
           printf("+");
        }
        if(num==0.0){
            printf("0.0E00\n");
            return 0;
        }
        if(num>0){
        while(num>=10){
            num/=10.0;
            count++;
        }
    }
    if(num>0 && num<1){
        while(num<10.0){
            num*=10.0;
            count--;
        }
    }
        if(count==0)
        {
            printf("%.4lfE+00\n",num);
            return 0;
        }
        if(count>0)
        {
            printf("%.4lfE+%d\n",num, count);
            return 0;
        }
        if(count<0){
        printf("%.4lfE%d\n",num,count);
        }
    return 0;
}
