#include<stdio.h>
#include<conio.h>
int main () {
    int r,x=0;
    system("cls");
    printf("Enter No. of Rows\n");
    scanf("%d",&r);
    while (x<r){
        for (int n = 0; n < x; n++)
        {printf(" ");}        
        for (int i = 0; i < 2*(r-x)-1;i++)
        {printf("*");}
        printf("\n");
        x++;}
    return 0;
}