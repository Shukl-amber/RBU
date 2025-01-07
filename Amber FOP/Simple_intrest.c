#include<stdio.h>
int main () {
    int SI,P,N,R;
    printf("ENTER Principle\n");
    scanf("%d",&P);
    printf("ENTER No of Years\n");
    scanf("%d",&N);
    printf("ENTER Rate of Intrest\n");
    scanf("%d",&R);
    SI=(P*N*R)/100;
    printf("Yearly Intrest is %d And Total Intrest is %d",SI,SI*N);
    return 0;
}