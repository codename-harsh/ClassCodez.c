#include<stdio.h>
int main(){
    int choice;
  printf("Enyter 1 to calculate factorial");
  printf("\nenter 2 to calculate sum of first n natural numbers ");
  printf("\nenter 3 to calculate reverse of a number");
  printf("enter the number : ");
  scanf("%d",&choice);
  int n;
scanf("%d",&n);
int fact,sum,rev,i,r;
switch(choice){
    case 1: fact=1;
    for(int i=1;i<=n;i++)
    fact*=i;
    printf("%d",fact);

}

}