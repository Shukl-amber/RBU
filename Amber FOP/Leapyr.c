#include<stdio.h>
#include<stdlib.h>
int main () {
    int yr;
    system("cls");
    printf("Enter year\n");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        if ((yr%100==0)&&(yr%400==0))
        {
            printf("It is leap year");
        }
        else if (yr%100!=0)
        {
            printf("Its a leap year");
        }
        else
        {
            printf("Its not a leap year");
        }
        
    }
    else
    {
        printf("Its not a leap year");
    }
    
    return 0;
}