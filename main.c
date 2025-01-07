#include <string.h>
#include <stdio.h>
#include "tokens.h"
#include "lib.h"
#include "lexer.h"

#define lineSize 1024

int main(int argc, char const *argv[]){
    if (argc != 4) {
      	 printf("\nERROR 002:\nInsufficient arguments\nUsage: <source file> <output file> <architecture flag>\n");
      	return 2;
    }

	const char *source_file = argv[1];
	const char *output_file = argv[2];
	const char *arch_flag = argv[3];

	FILE *file = fopen(source_file, "r");
		char line[lineSize];

	if (file){

		printf("Reading file data...\n\n");
		int lineCount = 0;

		while (fgets(line, lineSize, file)) {
			removeSpecialChars(line);
			char *results = strtok(line, " ");



			while(results != NULL) {
				if(checkToken(results)){
					printf("%s\n",checkToken(results));
				}
				printf("raw: %s\n", results);

				results = strtok(NULL, " ");				
			}

			lineCount++;
        	}

		fclose(file);
	}else{

		printf("\nERROR 003: no file or data found [%s] \n", source_file);
		return 3;
		
	}
	return 0;
}