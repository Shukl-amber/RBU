#include<stdio.h>
void main () 
{
    int OT,HRS,AB;
    char str[10];
    printf("Enter employee name ");
    scanf("%s",&str);
    printf("Enter no of hours worked overtime ");
    scanf("%d",&OT);
    printf("Enter no of Absents ");
    scanf("%d",&AB);
    HRS=(OT-(2*AB)/3);
    printf("No of creditable overtime hours for %s is %d",str,HRS);}