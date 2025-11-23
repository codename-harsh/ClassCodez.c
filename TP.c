// WAP to check whether the number is twisted prime or not 
// Twsited prime : is the prime number whose rev is also a prime number .
#include<stdio.h>
#include<math.h>
int main(){
    int n,rev=0,temp,p=1,tp=1,i;
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    if(n<1){
        p=0;
    }
    else {
        for(i=2;i<=sqrt(n);i++){
            if(rev%i==0) {
                tp = 0;
                break;
            }
            
        }
    }
    if(p && tp)
    printf("%d is a twisted prime \n",n);
    else printf("%d is not a twisted prime",n);
    return 0;
}