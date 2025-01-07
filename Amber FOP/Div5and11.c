#include<stdio.h>
int main () {
    int num,rem5,rem11;
    printf("Enter No. ");
    scanf("%d",&num);
    rem5=num%5;
    rem11=num%11;
    if (rem5==0)
    {   if (rem11==0)
        {printf("Number is Divisible by both 5 and 11");}
        else
        {printf("Number is Divisible by 5 BUT not by 11");}}
    else if (rem11==0)
    {   if (rem5==0)
        {printf("Number is Divisible by both 5 and 11");}
        else
        {printf("Number is Divisible by 11 BUT not by 5");}}
    else
    {printf("Number is Neither divisible by 5 Nor 11");}
    return 0;}