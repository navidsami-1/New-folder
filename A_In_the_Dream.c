#include <stdio.h>

static int ok(int x, int y) {
    if (x < 0 || y < 0) return 0;
    int mx = (x > y) ? x : y;
    int mn = (x < y) ? x : y;
    return mx <= 2 * mn + 2;
}

int main(void) {
    int t; 
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int fhR = a, fhK = b;           // প্রথম অর্ধের গোল
        int shR = c - a, shK = d - b;   // দ্বিতীয় অর্ধে বাড়তি গোল

        if (ok(fhR, fhK) && ok(shR, shK)) puts("YES");
        else puts("NO");
    }
    return 0;
}
