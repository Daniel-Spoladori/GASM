#include <stdlib.h>

void clearScreen()
{
	system("@cls||clear");
}

void removeSpecialChars(char *inputData) {
	int readIndex = 0, writeIndex = 0;
	while (inputData[readIndex] != '\0') {
		if (inputData[readIndex] != '\n' && inputData[readIndex] != '\r') {
			inputData[writeIndex++] = inputData[readIndex];
		}
		readIndex++;
	}
	inputData[writeIndex] = '\0';
}