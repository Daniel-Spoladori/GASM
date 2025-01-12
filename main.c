#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "tokens.h"
#include "lib.h"
#include "lexer.h"
#include "errors.h"

#define lineSize 4096

int main(int argc, char const *argv[]){
	if (argc != 4) {
		printError(ERR_insufficientArg);
		return ERR_insufficientArg.errorID;
	}

	const char *argumentsSourceFile = argv[1];
	const char *argumentsOutputFile = argv[2];
	const char *argumentsArchitectureFlag = argv[3];

	FILE *sourceFile = fopen(argumentsSourceFile, "r");
	char lineBuffer[lineSize];


	if (!sourceFile){
		printError(ERR_noFileOrData);
		return ERR_noFileOrData.errorID;
	}

	printf("Reading file data...\n\n");
	int lineCount = 0;

	while (fgets(lineBuffer, lineSize, sourceFile)) {
		removeSpecialChars(lineBuffer);
		char *TST = strtok(lineBuffer, " ");

		while(TST != NULL) {
			printf("Read Line: %s\n", TST);  // Debugging line reading
			if(lookupToken(TST)){
				printf("Lookup %s\n",lookupToken(TST));
			}
			printf("raw: %s\n", TST);

			TST = strtok(NULL, " ");
		}

		lineCount++;
	}

	fclose(sourceFile);
	return 0;
}