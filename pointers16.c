#include <stdio.h>

void reverseString(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
