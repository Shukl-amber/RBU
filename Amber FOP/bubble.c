#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size, temp;
    printf("ENTER ARRAY SIZE: ");
    scanf("%d", &size);

    int arr[size];
    printf("ENTER ARRAY AS SPACED VARIABLES: ");

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    bool cont = false;

    do{
        cont = false;
        for (int i = 0; i < size - 1; i++){
            if (arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                cont = true;
            }
        }
    } while (cont);
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}