#include<stdio.h>
int main () {
    int come,sales;
    printf("Input No of Sales ");
    scanf("%d",&sales);
    if (sales<100)
    {printf("No commission");}
    else if (sales>=100)
    {
        if (sales<=500)
        {
            come=sales/10;
            printf(" $%d commission",come);
        }
        else
        {   come=100+((sales-500)/100)*8;
            printf(" $%d commission",come);}
    }
    return 0;}