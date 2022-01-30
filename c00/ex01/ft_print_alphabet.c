#include <unistd.h> 

void ft_print_alphabet(void) {

	char symbol = 'a';

	while ( symbol <= 'z' ) {

		write(1, &symbol, 1);
		symbol++;
	}

	write(1,"\n", 1);
} 