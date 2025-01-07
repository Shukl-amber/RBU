#include<stdio.h>
int main () {
    
    int R1,C1,R2,C2;

    rest:

    printf("ENTER NO. OF ROWS AND COLUMNS OF 1st MATRIX: ");
    scanf("%d %d",&R1,&C1);

    printf("ENTER NO. OF ROWS AND COLUMNS OF 2nd MATRIX: ");
    scanf("%d %d",&R2,&C2);

    int M1[R1][C1],M2[R2][C2],Mult[R1][C2];

    if (R1<1||R2<1||C1<1||C2<1||C1!=R2)
    {
        printf("ENTER VALID VALUES (R,C>0),(C1=R2)\n");
        goto rest;
    }
    
    printf("ENTER VALUES FOR 1st MATRIX: ");
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++)
            scanf("%d",&M1[i][j]);   
    
    printf("ENTER VALUES FOR 2nd MATRIX: ");
    for (int i = 0; i < R2; i++)
        for (int j = 0; j < C2; j++)
            scanf("%d",&M2[i][j]); 
    
    printf("Resultant Matrix is:\n");
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {

            Mult[i][j] = 0;
 
            for (int k = 0; k < R2; k++) 
                Mult[i][j] += M1[i][k] * M2[k][j];
            
        }
    }

    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
            printf("%d ",Mult[i][j]);
        printf("\n");
    }
    
    return 0;
}