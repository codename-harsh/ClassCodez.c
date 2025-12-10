#include <stdio.h>

int main() {
    int d, m, y;
    int totalDays = 0;
    int isLeap = 0;

    scanf("%2d %2d %4d", &d, &m, &y);

    // Check leap year
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        isLeap = 1;

    // BASIC DATE VALIDATION
    if(y < 1900 || m < 1 || m > 12 || d < 1) {
        printf("INVALID DATE");
        return 0;
    }

    if(
        (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31 ||
        (m == 4 || m == 6 || m == 9 || m == 11) && d > 30 ||
        (m == 2 && isLeap == 0 && d > 28) ||
        (m == 2 && isLeap == 1 && d > 29)
      ) {
        printf("INVALID DATE");
        return 0;
    }

    // Count days for years
    for(int i = 1900; i < y; i++) {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    // Count days for months
    if(m > 1) totalDays += 31;
    if(m > 2) totalDays += isLeap ? 29 : 28;
    if(m > 3) totalDays += 31;
    if(m > 4) totalDays += 30;
    if(m > 5) totalDays += 31;
    if(m > 6) totalDays += 30;
    if(m > 7) totalDays += 31;
    if(m > 8) totalDays += 31;
    if(m > 9) totalDays += 30;
    if(m > 10) totalDays += 31;
    if(m > 11) totalDays += 30;

    totalDays += d;

    // Weekday
    switch(totalDays % 7) {
        case 1: printf("MONDAY"); break;
        case 2: printf("TUESDAY"); break;
        case 3: printf("WEDNESDAY"); break;
        case 4: printf("THURSDAY"); break;
        case 5: printf("FRIDAY"); break;
        case 6: printf("SATURDAY"); break;
        case 0: printf("SUNDAY"); break;
    }

    return 0;
}
