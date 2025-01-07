#include<stdio.h>
#include<stdlib.h>
float series(float n){
    float sum=0;
    while (n>0)
    {
        long long i=n,fact=1;
        while (i>0)
        {
            fact=fact*i;
            i--;
        }
        sum=sum+(n/fact);
        n--;
    }
    return sum;
}
int main () {
    system("cls");
    float n=0,op=0;
    printf("For the series (1/1!)+(2/2!)+.....+(N/N!)\nEnter N : ");
    scanf("%f",&n);
    op=series(n);
    printf("The sum of the series till %.0f is \n%f",n,op);
    return 0;}