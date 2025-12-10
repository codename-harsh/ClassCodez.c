// Your task is to write a C program that accepts marks of five subjects and print the result of the student according to following criteria: Between 75 – 100% --- First Division Between 60 – 74% ----- Second Division Between 33 – 59% ------ Third Division Below 33%-----Fail First check individual subject marks. If marks < 30 then it will be considered as Carry Paper. Check the validity of each marks first. i.e 0<=marks<=100. If it is not,then print "INVALID MARKS". Output: Print- Result, Division, %marks and Number of carry papers Eg: 75 67 23 50 82 Result: Pass Third Division 59.4% CP: 1.

// But if fail then print only Fail and No. of CP.

#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a<0 || a>100 || b<0 || b>100 || c<0 || c>100 || d<0 || d>100 || e<0 || e>100) printf("INVALID MARKS");
float per = (a+b+c+d+e)/5.0;
int CP=0;
if(a<33) CP++;
if(b<33) CP++;
if(c<33) CP++;
if(d<33) CP++;
if(e<33) CP++;
    if (CP > 0) {
        printf("Fail ");
        printf("CP:%d ",CP);
        return 0;
    }
    printf("Pass ");
    if (per >= 75 && per <= 100) {
        printf("First division ");
    } else if (per >= 60 && per < 75) {
        printf("Second division ");
    } else if (per >= 33 && per < 60) {
        printf("Third division ");
    }
     printf("%.1f ", per);
    printf("CP:%d ", CP);
}