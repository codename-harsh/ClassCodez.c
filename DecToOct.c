#include<stdio.h>
int dto(int n){
    int d=0;
    int r=n%8;
    int i;
    d+=(r*i);
    i*=10;
    n/=10;
    return d;
}
int main(){
    int n=10;
    printf("%d",dto(n));
    
}