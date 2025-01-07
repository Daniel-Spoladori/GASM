#ifndef TOKENS_H
	#define TOKENS_H

	static const struct {
		const char* keyword;
		const char* token;
	} tokens[] = {
		{"inc", "TKN_increment"},
		{"dec", "TKN_decrement"},
		{"add", "TKN_add"},
		{"sub", "TKN_subtract"},
		{"mul", "TKN_multiply"},
		{"div", "TKN_divide"},
		{"mod", "TKN_module"},
		{"pwr", "TKN_power"},

		{"not", "TKN_not"},
		{"and", "TKN_and"},
		{"or", "TKN_or"},
		{"nand", "TKN_nand"},
		{"nor", "TKN_nor"},
		{"xor", "TKN_xor"},
		{"xnor", "TKN_xnor"},

		{"not32", "TKN_not32"},
		{"and32", "TKN_and32"},
		{"or32", "TKN_or32"},
		{"nand32", "TKN_nand32"},
		{"nor32", "TKN_nor32"},
		{"xor32", "TKN_xor32"},
		{"xnor32", "TKN_xnor32"},

		{"jmp", "TKN_jump"},
		{"jmpo", "TKN_jump_overflow"},
		{"jmpn", "TKN_jump_negative"},
		{"jmpz", "TKN_jump_zero"},
		{"jmpg", "TKN_jump_greater"},
		{"jmps", "TKN_jump_smaller"},
		{"jmpe", "TKN_jump_equals"},
		{"jmpf", "TKN_jump_foward"},
		{"jmpb", "TKN_jump_backwards"},
		{"jmpip", "TKN_jump_interrupt"},
		{"jmpir", "TKN_jump_interrupt_request"},

		{"mjmp", "TKN_memory_jump"},
		{"mjmpo", "TKN_memory_jump_overflow"},
		{"mjmpn", "TKN_memory_jump_negative"},
		{"mjmpz", "TKN_memory_jump_zero"},
		{"mjmpg", "TKN_memory_jump_greater"},
		{"mjmps", "TKN_memory_jump_smaller"},
		{"mjmpe", "TKN_memory_jump_equals"},
		{"mjmpf", "TKN_memory_jump_foward"},
		{"mjmpb", "TKN_memory_jump_backwards"},
		{"mjmpip", "TKN_memory_jump_interrupt"},
		{"mjmpir", "TKN_memory_jump_interrupt_request"},

		{"frze", "TKN_freeze"},
		{"stdn", "TKN_shutdown"},
		{"strb", "TKN_reboot"},

		{"itrp", "TKN_interrupt"},
		{"itrr", "TKN_interrupt_request"},

		{"flip", "TKN_flip"},
		{"sftu", "TKN_shift_up"},
		{"sftd", "TKN_shift_down"},
		{"rttl", "TKN_rotate_left"},
		{"rttr", "TKN_rotate_right"},

		{"move", "TKN_move"},
		{"ldi", "TKN_load_immediate"},

		{"iord", "TKN_io_read"},
		{"iowt", "TKN_io_write"},
		{"cmpr", "TKN_component_read"},
		{"cmpt", "TKN_component_write"},

		{"bin", "TKN_binary"}
	};
#endif 