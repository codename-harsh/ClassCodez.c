#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n = n/10;
    switch(n){
        case 0:
            printf("Grade f\n");
            break;
        case 1:
            printf("Grade f\n");
            break;
        case 2:
            printf("Grade F\n");
            break;
        case 3:
            printf("Grade D\n");
            break;
            case 4:
            printf("Grade C\n");
            break;
            case 5:
            printf("Grade C\n");
            break;
            case 6:
            printf("Grade B\n");
            break;
            case 7:
            printf("Grade B\n");
            break;
            case 8:
            printf("Grade A\n");
            break;
            case 9:
            printf("Grade A\n");
            break;
            case 10:
            printf("Grade A\n");
            break;
        default:
            printf("Invalid Number\n");
    }
}