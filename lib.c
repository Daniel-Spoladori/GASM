#include <stdlib.h>

void clearScreen()
{
    system("@cls||clear");
}

void removeSpecialChars(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n' && str[i] != '\r') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}
