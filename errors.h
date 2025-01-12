#ifndef ERRORS_H
	#define ERRORS_H
	typedef struct {
		const char *errorMessage;
		const int errorID;
	} Errors;


	#define CREATE_ERROR(name, message, id) \
		static const Errors name = { message, id };

	#define printError(inputError) \
		(printf("\nERROR: %d\n%s\nLine:%d File:%s\n", \
			(inputError).errorID, \
			(inputError).errorMessage, \
			__LINE__, \
			__FILE__))

	CREATE_ERROR(ERR_noFileOrData, "No file or data found", 300)
	CREATE_ERROR(ERR_insufficientArg, "Insufficient arguments when callling GASM\nUsage: <source file> <output file> <architecture flag>", 500)
#endif
