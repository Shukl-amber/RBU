#include <stdio.h>
#include <stdlib.h>
int main() {
    int size;

    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&size);

    int arr[size],sum=0;

    printf("ENTER YOUR ARRAY AS SPACED VARIBLES: ");

    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of all elements of the array is: %d\n",sum);

    return 0;
}
