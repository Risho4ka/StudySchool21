#include <unistd.h>

void ft_print_comb_Stas( int );

int main( void ) {

	ft_print_comb_Stas( 3 );

	return(1);
}

void ft_print_comb_Stas( int n ) {

	int i = 11;

	while( ++i <= 689 ) {

		char num3 = (char) 48+(int)i/100;
		char num2 = (char) 48+(int)(i-100*((int)i/100))/10;
		char num1 = (char) 48+i%10;

		if( num3 < num2 && num2 < num1 ) {

			write(1, &num3, 1);
			write(1, &num2, 1);
			write(1, &num1, 1);
			write(1, ", ", 2);
		}
	}
	write(1, "789", 3);
}