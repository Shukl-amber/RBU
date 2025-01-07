#include<stdio.h>
int main()
{
   int num,a,b,c;
   for (num = 1; num < 1000; num++)
   {
   a=(num%10);
   b=(num/10)%10;
   c=(num/100);
   if (num==((a*a*a)+(b*b*b)+(c*c*c)))
   {printf("%d ",num);}
   }
   return 0;
}