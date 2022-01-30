#include <unistd.h> 

void ft_print_reverse_alphabet(void) {

	char symbol = 'z';

	while ( symbol >= 'a' ) {

		write(1, &symbol, 1);
		symbol--;
	}

	write(1,"\n", 1);
} 