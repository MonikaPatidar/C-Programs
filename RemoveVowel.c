#include<stdio.h>
#include<string.h>

int main() {

    char str[100], temp[100];
    int i = 0, j = 0;

    printf("Enter any string:");
    scanf("%[^\n]%*c", str);

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
                {

            temp[j] = str[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    strcpy(str, temp);
    printf("String without consonant is:%s", str);

    return 0;
}
