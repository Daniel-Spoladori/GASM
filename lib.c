#include <stdlib.h>

void clearScreen()
{
	system("@cls||clear");
}

void removeSpecialChars(char *str) {
	int readIndex = 0, writeIndex = 0;
	while (str[readIndex] != '\0') {
		if (str[readIndex] != '\n' && str[readIndex] != '\r') {
			str[writeIndex++] = str[readIndex];
		}
		readIndex++;
	}
	str[writeIndex] = '\0';
}