#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (tolower(str[i]) == 'a')
        {
            count++;
        }
    }

    printf("A letra 'a' aparece %d vezes na string.\n", count);

    return 0;
}