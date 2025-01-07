#include<stdio.h>
#include<stdlib.h>
int main () {
    char in;
    int c;
    system("cls");
    printf("Enter character to check vowel or consonant\n");
    scanf("%c",&in);
    if (in==65||in==69||in==73||in==79||in==85||in==97||in==101||in==105||in==111||in==117)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    
    switch (c)
    {
    case 1:
        printf("IT IS A VOWEL");
        break;
    default:
        printf("IT IS NOT A VOWEL");
        break;
    }
    return 0;
}