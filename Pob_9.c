#include<stdio.h>

int main()
{
    int day, y, w, d;
    printf("Enter the days: ");
    scanf("%d", &day);

    y = day / 365; // Calculate years
    d = day % 365; // Remaining days after calculating years
    w = d / 7;    // Calculate weeks from remaining days
    d = d % 7;    // Remaining days after calculating weeks
    printf("%d years, %d weeks, %d days\n", y, w, d);
    return 0;
}