#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main () {
    system("cls");
    int size,dup;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&size);
    int arr[size];
    dup=size;
    bool cond=true;
    printf("ENTER ARRAY VALUES: ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    while (cond)
    {
        cond=false;
        dup--;
        for (int i = 0; i < dup; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                cond=true;
            }
        }
    }
    printf("SORTED ARRAY IS: ");
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    return 0;
}