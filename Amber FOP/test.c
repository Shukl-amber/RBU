#include<stdio.h>
int main () {
    char z;
    scanf("%c",&z);
    switch (z)
    {
    case (65||69):
        printf("VOWEL");
        break;
    
    default:
        printf("NO");
        break;
    }
    return 0;
}