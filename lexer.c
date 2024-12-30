#include <string.h>
#include <stdio.h>
#include "tokens.h"
#include "lib.h"

const char* checkToken(char* element){
	for (int i = 0; i < arraySize(tokens); i++){
		if (!strcmp(element, tokens[i].keyword)){
			return (tokens[i].token);
		}
	}
	return 1;
}

int main(){

	return 0;
}