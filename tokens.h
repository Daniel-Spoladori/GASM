#ifndef TOKENS_H
	#define TOKENS_H

	static const struct {
		const char* keyword;
		const char* token;
	} tokens[] = {
		{"inc", ""},
		{"dec", ""},
		{"add", ""},
		{"sub", ""},
		{"mul", ""},
		{"div", ""},
		{"mod", ""},
		{"pwr", ""},

		{"not", ""},
		{"and", ""},
		{"or", ""},
		{"nand", ""},
		{"nor", ""},
		{"xor", ""},
		{"xnor", ""},

		{"not32", ""},
		{"and32", ""},
		{"or32", ""},
		{"nand32", ""},
		{"nor32", ""},
		{"xor32", ""},
		{"xnor32", ""},

		{"jmp", ""},
		{"jmpo", ""},
		{"jmpn", ""},
		{"jmpz", ""},
		{"jmpg", ""},
		{"jmps", ""},
		{"jmpe", ""},
		{"jmpf", ""},
		{"jmpb", ""},
		{"jmpip", ""},
		{"jmpir", ""},

		{"mjmp", ""},
		{"mjmpo", ""},
		{"mjmpn", ""},
		{"mjmpz", ""},
		{"mjmpg", ""},
		{"mjmps", ""},
		{"mjmpe", ""},
		{"mjmpf", ""},
		{"mjmpb", ""},
		{"mjmpip", ""},
		{"mjmpir", ""},

		{"frze", ""},
		{"stdn", ""},
		{"strb", ""},

		{"itrp", ""},
		{"itrr", ""},

		{"flip", ""},
		{"sftu", ""},
		{"sftd", ""},
		{"rttl", ""},
		{"rttr", ""},

		{"move", ""},
		{"ldi", ""},

		{"iord", ""},
		{"iowt", ""},
		{"cmpr", ""},
		{"cmpt", ""},

		{"bin", ""}
	};
#endif 