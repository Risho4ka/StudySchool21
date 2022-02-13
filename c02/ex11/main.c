#include "ft_putstr_non_printable.c"
#include <stdio.h>

int main(void) {

	char string [] = "Coucou\ntu vas bien ?";

	string[3] = (char)127;
	string[11] = (char)31;
	string[16] = (char)5;

	printf("%s\n", string);

	ft_putstr_non_printable ( string );

	return(0);

	}