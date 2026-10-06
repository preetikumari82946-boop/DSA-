#include <stdio.h>

void myStrcpy(char *a, char *b)
{
    while (*b != '\0')
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

void myStrcat(char *a, char *b)
{
    while (*a != '\0')
    {
        a++;
    }

    while (*b != '\0')
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

int myStrcmp(char *a, char *b)
{
    while (*a == *b && *a != '\0' && *b != '\0')
    {
        a++;
        b++;
    }

    return *a - *b;
}

int main()
{
    char s1[100], s2[100], s3[100];
    int r;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    myStrcpy(s3, s1);
    printf("\nCopied String = %s\n", s3);

    myStrcat(s1, s2);
    printf("Concatenated String = %s\n", s1);

    r = myStrcmp(s3, s2);

    if (r == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}