#include <stdio.h>
#include <string.h>

void main()
{
    int i, j = 0, k = 0;
    char str[100], str1[10][20], temp, min;

    printf("enter the string:");
    scanf("%[^\n]s", str);


/* sorts the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0';j++)
        {
            if (str[j] > str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
}
