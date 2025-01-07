#include<stdio.h>
#include<stdlib.h>
int main () {
    int a,i,n;
    system("cls");
    printf("ENTER NUMBER TO CHECK\n");
    scanf("%d",&a);
    i=2;
    if (a==2||a==3||a==5)
    {
        printf("It is prime");
    }
    else if (a<2)
    {
        printf("No less than 2 cannot be prime");
    }
    else
    {
    while (i<a/2)
    {
    n=a%i;
    if (n==0)
    {
        printf("Num is not Prime as it is divisible by %d",i);
        break;
    }
    i++;
    }   
    if (n!=0)
    {
        printf("It is prime");
    }
    }
    return 0;
}