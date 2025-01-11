#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "tokens.h"
#include "lib.h"
#include "lexer.h"

#define lineSize 4096

int main(int argc, char const *argv[]){
    if (argc != 4) {
      	 printf("\nERROR 002:\nInsufficient arguments\nUsage: <source file> <output file> <architecture flag>\n");
      	return 2;
    }

	const char *argumentsSourceFile = argv[1];
	const char *argumentsOutputFile = argv[2];
	const char *argumentsArchitectureFlag = argv[3];

	printf("RF %s\n\n", argumentsSourceFile);

	FILE *sourceFile = fopen(argumentsSourceFile, "r");
		char lineBuffer[lineSize];

	if (sourceFile){
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
	}else{

		printf("\nERROR 003: no file or data found [%s] \n", argumentsSourceFile);
		return 3;
		
	}
	return 0;
}