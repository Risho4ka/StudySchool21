#include <unistd.h> 

void ft_print_numbers(void) {

	char nums = '0';

	while ( nums <= '9' ) {

		write(1, &nums, 1);
		nums++;
	}

	write(1,"\n", 1);
} 
