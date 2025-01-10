#include <string.h>
#include "tokens.h"
#include "lib.h"

const char* checkToken(const char *element){
	for (int i = 0; i < arraySize(tokens); i++){
		if (!strcmp(element, tokens[i].keyword)){
			return (tokens[i].token);
		}
	}
	return NULL;
}
const char* getParameters(const char *data,  const char *character ){

}