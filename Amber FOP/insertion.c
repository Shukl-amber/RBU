#include <stdio.h>
int main()
{
    int size;
    printf("ENTER ARRAY SIZE: ");
    scanf("%d", &size);

    int arr[size];
    printf("ENTER ARRAY AS SPACED VARIABLES: ");

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i < size; i++){
        int base = arr[i];
        int j = i - 1;
        while (j >= 0){
            if (arr[j]<base)
                break;
            
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = base;
    }
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}