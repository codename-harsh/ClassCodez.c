#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct                  // new fking thing learned !!
{
    int rollno; char name[20]; char branch[15]; int year; int marks;
} stud;
int main(){
int n; printf("Enter the number of students : \n");
scanf("%d",&n);
stud s[n]; printf("Enter the roll no, name, branch, year and marks : \n");
for(int i=0;i<n;i++){
    scanf("%d",&s[i].rollno);
   fflush(stdin);
    gets(s[i].name); 
fflush(stdin);
    gets(s[i].branch);
    scanf("%d %d",&s[i].year,&s[i].marks);
}
printf("The Failed students are : \n");    
for(int i=0;i<n;i++){
   if(s[i].marks<40){ 
    printf("%d %s %s %d %d\n",s[i].rollno,s[i].name,s[i].branch,s[i].year,s[i].marks);
        }
    }
return 0;
}