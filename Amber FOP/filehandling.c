#include <stdio.h>
#include <stdbool.h>
int main()
{
    FILE *file1, *file2;
    char ch1, ch2;
    file1 = fopen("1.txt", "r");
    file2 = fopen("2.txt", "r");
    // contents of file 1 "I LIKE CATS"
    // contents of file 1 "I LIKE DOGS"
    if (file1 == NULL || file2 == NULL)
    {
        printf("ERROR");
        return 0;
    }
    while (true)
    {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2)
        {
            printf("NOT EQUAL CONTENT");
            return 0;
        }

        if (ch1 == EOF && ch2 == EOF)
        {
            printf("EQUAL CONTENT");
            return 0;
        }
    }
    fclose(file1);
    fclose(file2);
    return 0;
}