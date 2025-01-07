#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c,d,x1,x2;
    printf("Enter A *coeff of x^2* ");
    scanf("%f",&a);
    printf("Enter B *coeff of x* ");
    scanf("%f",&b);
    printf("Enter C *constant* ");
    scanf("%f",&c);
    d=sqrt((b*b)-(4*a*c));
    x1=((-b)-d)/(2*a);
    x2=((-b)+d)/(2*a);
    printf("Zeros of the EQN %f x^2 + %f x + %f are %f , %f",a,b,c,x1,x2);
    return 0;}