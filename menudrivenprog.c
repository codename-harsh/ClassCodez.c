#include<stdio.h>
int main()
{
    int choice;
    int n, fact, sum, rev, r, i;
    printf("Enter 1 to calculate factorial");
    printf("\nEnter 2 to calculate sum of first n natural numbers");
    printf("\nEnter 3 to calculate reverse of a number");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter the number: ");
    scanf("%d",&n);
    switch(choice){
        case 1:
            fact = 1;
            for(i = 1; i <= n; i++)
                fact = fact * i;
            printf("Factorial = %d", fact);
            break;
        case 2:
            sum = 0;
            for(i = 1; i <= n; i++)
                sum = sum + i;
            printf("Sum = %d", sum);
            break;
        case 3:
            rev = 0;
            while(n > 0)
            {
                r = n % 10;
                rev = rev * 10 + r;
                n = n / 10;
            }
            printf("Reverse = %d", rev);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}