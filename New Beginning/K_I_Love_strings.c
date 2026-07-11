#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char s[55], t[55];
        scanf("%s %s", s, t);

        int lenS = strlen(s);
        int lenT = strlen(t);
        int mx = (lenS > lenT) ? lenS : lenT;

        for (int i = 0; i < mx; i++) {
            if (i < lenS)
                printf("%c", s[i]);
            if (i < lenT)
                printf("%c", t[i]);
        }
        printf("\n");
    }

    return 0;
}