#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[100];
    char prev = ' ';        /* pretend there's a space before the string */
    int n = 0;              /* number of initials printed */
    int i = 0;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i]!='\0') {
        if (isalpha(name[i]) && isspace(prev)) {
            if (n++) putchar(' ');
            putchar(name[i]);
        }
        prev = name[i];
        i++;
    }
    putchar('\n');

    return 0;
}
