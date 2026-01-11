#include<stdio.h>
void pat(int n){
    if(n == 0)
    return;
    pat(n - 1);
    printf("\n");
    for(int i = 1; i <= n; i++)
        printf("%d ", i);
}
int main(){
    int n;
    scanf("%d", &n);
    pat(n);
    return 0;
}
