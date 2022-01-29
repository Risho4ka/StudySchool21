#include <unistd.h> 

void ft_print_alphabet(void) {

	for( char symbol = 'a'; symbol <= 'z'; symbol++ ) {

		write(1, &symbol, 1);
	}

	write(1,'\n', 1);
} 