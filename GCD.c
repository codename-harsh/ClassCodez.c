#include<stdio.h>
#include<math.h>
int main(){
    int m,n,a;
    printf("Enter the nums : ");
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m && i<=n;i++){
        if(m%i==0 && n%i==0) a=i;
    }
    printf("The GCD is : %d",a);
}
