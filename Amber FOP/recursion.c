#include<stdio.h>
#include<stdlib.h>
long long fibb(long long n1,long long n2,long long sum,long long n);
void main () {
    system("cls");
    long long n=0;
    printf("ENTER NUMBER TILL FIBBONACCI SERIES IS NEEDED: ");
    scanf("%lld",&n);
    printf("0 1 ");
    fibb(0,1,0,n);}
long long fibb(long long n1,long long n2,long long sum,long long n){
    sum=n1+n2;
    n1=n2;
    n2=sum;
    if (n>sum)
    {printf("%d ",sum);
    fibb(n1,n2,sum,n);}
    else
    {printf("COMPLETED");
    return 0;}}