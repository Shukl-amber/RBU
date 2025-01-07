#include<stdio.h>
int main () {
    char str[20];
    float roll,s1,s2,s3,s4,s5,avg;
    printf("Inpur Name ");
    scanf("%s",&str);
    printf("Input Roll No ");
    scanf("%f",&roll);
    printf("Input marks of Subject 1 ");
    scanf("%f",&s1);
    printf("Input marks of Subject 2 ");
    scanf("%f",&s2);
    printf("Input marks of Subject 3 ");
    scanf("%f",&s3);
    printf("Input marks of Subject 4 ");
    scanf("%f",&s4);
    printf("Input marks of Subject 5 ");
    scanf("%f",&s5);
    avg=(s1+s2+s3+s4+s5)/5;
    printf("Percentage score of %s with Roll No %f is %.2f%%",str,roll,avg);
return 0;}