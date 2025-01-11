#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "tokens.h"
#include "lib.h"

const char* lookupToken(const char *searchToken){
	for (int tokenIndex = 0; tokenIndex < arraySize(tokenArray); tokenIndex++){
		if (!strcmp(searchToken, tokenArray[tokenIndex].keyword)){
			return (tokenArray[tokenIndex].token);
		}
	}
	return NULL;
}

const int getTokenParameters(const char *inputData,  const char *searchSequence ){

	bool isNumberFound = false;
	int number = 0;
	const char *sequencePosition = strstr(inputData, searchSequence);
	if (!sequencePosition) return -1;

	sequencePosition += strlen(searchSequence);
	while (isdigit(*sequencePosition)){
		number = number * 10 + (*sequencePosition - '0');
		sequencePosition++;
		isNumberFound = true;
	}


	if (isNumberFound){
		return number;
	}
}