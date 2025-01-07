#ifndef LIB_H
	#define LIB_H
	#include <stdlib.h>

	#define arraySize(v) (sizeof(v) / sizeof(v[0]))
	void clearScreen();
	void removeSpecialChars();
#endif