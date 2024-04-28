#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char * s1 = str1;
    char * s2 = str2;

    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    gets(str2);

    while(*(++s1));

    while(*(s1++) = *(s2++));

    printf("Concatenated string = %s", str1);

    return 0;
}
