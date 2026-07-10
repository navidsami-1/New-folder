#include <stdio.h>

int main() {
    int n, speed, max;

    // Read until EOF
    while (scanf("%d", &n) != EOF) {
        max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &speed);
            if (speed > max) {
                max = speed;
            }
        }

        if (max < 10) {
            printf("1\n");
        }
        else if (max >= 10 && max < 20) {
            printf("2\n");
        }
        else {  // max >= 20
            printf("3\n");
        }
    }

    return 0;
}
