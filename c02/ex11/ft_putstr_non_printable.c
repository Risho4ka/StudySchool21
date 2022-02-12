#include <unistd.h> 

void ft_putstr_non_printable(char *str) { 

	int i = 0;
	char sixt [16] = "0123456789abcdef";

	while ( str[i] ) {
		if ( str[i] >= 0 && str[i] <= 31 ) {
			write(1, "\\", 1);
			write(1, &sixt[(int)str[i]/16], 1);
			write(1, &sixt[str[i]%16], 1);
			;
		}
		else if ( str[i] == 127 ) 
			write(1, "\\7f", 3);
		else
			write ( 1, &str[i], 1 );
		
		i++;
	}
}