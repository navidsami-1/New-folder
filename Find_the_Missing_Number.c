#include<stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);

    while(t--){
        long long m, a, b,c;
        long long f = 0;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        if (m==0) {
            printf("0\n");
            continue;
        }
        if (a==0 || b==0 || c==0) {
            printf("-1\n");
            continue;
        }
        long long r1 = m / a;
        if(m%a!= 0){
            f = 1;
        }
        long long r2=r1 / b;
        if (r1%b!= 0){
            f= 1;
        }
        long long r3=r2/ c;
        if (r2% c!=0){
            f= 1;
        }
        if (f==0)
            printf("%lld\n", r3);
        else
            printf("-1\n");
    }

    return 0;
}
