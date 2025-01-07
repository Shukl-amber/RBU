#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    system("cls");

    int select, data,size,count=0,mid,start,end,index;
    rest:

    printf("ENTER ARRAY SIZE: ");
    scanf("%d", &size);

    int arr[size];
    printf("ENTER ARRAY AS SPACED VARIABLES: ");

    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    
    printf("ENTER\n1 FOR LINEAR SEARCH\n2 FOR BINARY SEARCH\n");
    scanf("%d",&select);

    switch (select)
    {
    case 1:

        printf("ENTER DATA TO SCAN FOR: ");
        scanf("%d", &data);

        for (int i = 0; i < size; i++)
        {
            if (arr[i]==data)
            {
                count++;
                index=i+1;
            }
            
        }

        printf("Data Found %d Times at index: %d first",count,index);
        break;

    case 2:

        qsort(arr,size,sizeof(int),compare);

        printf("ENTER DATA TO SCAN FOR: ");
        scanf("%d", &data);

        start=0;
        end=size-1;
        mid=(start+end)/2;

        while (end>=start)
        {
            if (arr[mid]==data)
            {
                printf("Data Found\n");
                return 0;
            }
            else if (arr[mid]<data)
            {
                start=mid+1;
                mid=(start+end)/2;
            }
            else if (arr[mid]>data)
            {
                end=mid-1;
                mid=(start+end)/2;
            }
        }
        
        printf("DATA NOT FOUND");
        break;

    default:

        printf("ENTER A VALID VALUE\n");
        goto rest;
        break;

    }
    return 0;
}                                             






































































































































































































































































































































































































































