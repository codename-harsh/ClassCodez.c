#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n;
    printf("Enter the number :\n ");
    scanf("%d",&n);
    int c = fibo(n);
    printf("The 5th term of Fibonaci series is : %d",c);
}