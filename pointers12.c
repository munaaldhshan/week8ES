#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[100];

    printf("enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);

    printf("length of the string: %d\n", length);

    return 0;
}
