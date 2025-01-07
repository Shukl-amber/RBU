#include<stdio.h>
int main () {
    int base,hra,da,gross;
    printf("Enter base salary ");
    scanf("%D",&base);
    if (base>10000)     
    {   if (base>20000)
        {   hra=(base*30)/100;
            da=(base*90)/100;
            gross=hra+base+da;
            printf("Base salary is %d , HRA is %d and DA is %d Gross Salary is %d",base,hra,da,gross);}
        else
        {   hra=(base*25)/100;
            da=(base*90)/100;
            gross=hra+base+da;
            printf("Base salary is %d , HRA is %d and DA is %d Gross Salary is %d",base,hra,da,gross);}}
    else
    {   hra=(base*20)/100;
        da=(base*80)/100;
        gross=hra+base+da;
        printf("Base salary is %d , HRA is %d and DA is %d Gross Salary is %d",base,hra,da,gross);}
    return 0;}