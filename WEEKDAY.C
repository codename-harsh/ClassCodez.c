#include <stdio.h>
int main() {
    int d, m, y;
    scanf("%2d %2d %4d",&d,&m,&y);
    long total = 0;
    for (int i = 1; i < y; i++) {
        if ((i%4==0 && i%100!=0) || (i%400==0))
            total += 366;
        else
            total += 365;
    }
    for (int mm = 1; mm < m; mm++) {
        if (mm == 1) total += 31;          
        else if (mm == 2) {                
            if ((y%4==0 && y%100!=0) || (y%400==0))
                total += 29;
            else
                total += 28;
        }
        else if (mm == 3) total += 31;     
        else if (mm == 4) total += 30;     
        else if (mm == 5) total += 31;     
        else if (mm == 6) total += 30;     
        else if (mm == 7) total += 31;     
        else if (mm == 8) total += 31;     
        else if (mm == 9) total += 30;     
        else if (mm == 10) total += 31;    
        else if (mm == 11) total += 30;    
        else if (mm == 12) total += 31;    
    }
    total += d;
    int day = total % 7;
    switch (day) {
        case 1: printf("MONDAY"); break;
        case 2: printf("TUESDAY"); break;
        case 3: printf("WEDNESDAY"); break;
        case 4: printf("THURDAY"); break;
        case 5: printf("FRIDAY"); break;
        case 6: printf("SATURDAY"); break;
        case 0: printf("SUNDAY"); break;
    }

    return 0;
}
2