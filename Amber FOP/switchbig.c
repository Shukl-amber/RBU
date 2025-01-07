#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main () {
    system("cls");
    main:
    for (int z = 0; z!=4; z++)
    {
    int z,N1,N2,N3,max,temp=0;
    int factorial;
    long long value=1;
    printf("Enter 1 for Factorial, 2 for Prime, 3 for Largest of 3 numbers, 4 to Terminate\n");
    scanf("%d",&z);
    switch (z)
    {
    case 1:
        printf("Enter num to calculate Factorial\n");
        scanf("%d",&factorial);
        if (factorial<0)
        {
            printf("INVALID INPUT\n");
            break;
        }
        while (factorial>0)
        {
            value=value*factorial;
            factorial--;

        }
        printf("%lld\n",value);
        break;
    case 2:
        printf("Enter Number to check\n");
        scanf("%d",&N1);
        if (N1 <= 1) {
            printf("NEITHER PRIME NOR COMPOSITE\n");
            continue;}
        for (int i = 2; i*i<= N1; i++) {
            if (N1%i == 0) {
                printf("NOT PRIME\n");
                goto main;}}
        printf("PRIME\n");
        break;
    case 3:
        printf("Enter 1st Num\n");
        scanf("%d",&N1);
        printf("Enter 2nd Num\n");
        scanf("%d",&N2);
        printf("Enter 3rd Num\n");
        scanf("%d",&N3);
        max=(N1>N2)?(N1>N3)?N1:N3:(N2>N3)?N2:N3;
        printf("Biggest No is %d\n",max);
        break;
    case 4:
        printf("TERMINATING\n");
        return 0;
    default:
        printf("Enter a Valid test case\n");
        break;
    }
}
return 0;
}