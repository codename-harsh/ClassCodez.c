#include <stdio.h>
int main(){
    int decimal, octal = 0, place = 1, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        rem = decimal % 8; //jana
        octal +=rem * place;         // -> learn it like jana-aana-jana !
        place = place * 10; //aana
        decimal = decimal / 8; // jana
    }
    printf("Octal number = %d", octal);
    return 0;
}
