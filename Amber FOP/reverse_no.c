#include<stdio.h>
int main () {
    int input,rev,rem,quo1,quo2,quo3;
    printf("Enter 3 digit No to be reversed ");
    scanf("%d",&input);
    quo1=input/10;
    quo2=quo1%10;
    quo3=input/100;
    rem=input%10;
    rev=rem*100 + quo2*10 + quo3;
    printf("Reversed No is %d",rev);
    return 0;}