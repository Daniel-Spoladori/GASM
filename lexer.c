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
	return NULL;
}

int main(int argc, char const *argv[]){

    if (argc != 4) {
      	 printf("\nERROR 002:\nInsuficient arguments to GASM \nUsage: <source file> <output file> <architecture flag>\n");
      	return 2;
    }

	const char *source_file = argv[1];
	const char *output_file = argv[2];
	const char *arch_flag = argv[3];

	FILE *file = fopen("fileDir", "r");
	if (file){

		printf("FILE");

	}else{

		printf("\nERROR 003: no file or data found\n");
		return 3;
		
	}
	return 0;
}