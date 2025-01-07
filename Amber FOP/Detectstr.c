#include <stdio.h>
int main() {
    char ch;
    printf("ENTER ANYTHING: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
        printf("It is a Numerical Digit\n");
    else if ((ch >= 'A' && ch <= 'Z') ||
     (ch >= 'a' && ch <= 'z')) {
        printf("It is an Alphabet\n");
        if (ch >= 'A' && ch <= 'Z')
            printf("Its Lowercase is: %c\n", ch + 32);
        else if (ch >= 'a' && ch <= 'z')
            printf("Its Uppercase is: %c\n", ch - 32);
    } else
        printf("Its a Special symbol\n");
    return 0;
}