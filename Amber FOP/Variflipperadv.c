#include<stdio.h>
int main () {
    int v1,v2;
    printf("Enter Var 1 ");
    scanf("%d",&v1);
    printf("Enter Var 2 ");
    scanf("%d",&v2);
    v1=v1+v2;
    v2=v1-v2;
    v1=v1-v2;
    printf("OUTPUT 1 = %d , OUTPUT 2 = %d",v1,v2);
    return 0;}