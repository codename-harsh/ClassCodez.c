#include<stdio.h>
#include<math.h>   
int sum(int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    int c = sum(a,b);
    printf("%d",c);
}