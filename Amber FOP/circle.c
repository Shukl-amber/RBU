#include<stdio.h>
int main () {
    float r,cfm,area,pi=3.1428;
    printf("Enter Radius of circle ");
    scanf("%f",&r);
    area=pi*r*r;
    cfm=2*pi*r;
    printf("Circle with raduis %f has area %f and circumference %f",r,area,cfm);
    return 0;}