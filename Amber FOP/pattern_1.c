#include <stdio.h>
void main(void) {
    int rows;
    printf("Enter No of Rows: ");
    scanf("%d", &rows);
    for (int i = 0; i <= rows; i++) {
        for (int spaces = 0; spaces <= rows - i; spaces++) {
            printf("  ");
        }
        for (int n = 2*i-1; n<=4*i-3; n++) {
            printf("%d ",n);
        }
        printf("\n");
    }
}
