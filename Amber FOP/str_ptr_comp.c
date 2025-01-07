#include <stdio.h>
int main() {
 
    char str1[1000],str2[1000];
    char *ptr1=str1,*ptr2=str2;

    printf("ENTER 1ST STRING: ");
    scanf("%s",&str1);
    printf("ENTER 2ND STRING: ");
    scanf("%s",&str2);

    while ((*ptr1!='\0')||(*ptr2!='\0'))
    {
        if (*ptr1!=*ptr2)
        {
            printf("STRINGS ARE NOT EQUAL");
            return 0;
        }
        ptr1++;
        ptr2++;
    }
    
    printf("STRINGS ARE EQUAL");

    return 0;
}