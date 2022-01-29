#include <unistd.h> 

void ft_print_alphabet(void) {

	char x;

	for (x = 'a'; x <= 'z'; x++) {
		write(1, &x, 1);
	}

		write(1,"\n", 1);
} 