#include <unistd.h> 

void ft_putnbr(int nb) {

    int whole;
	int fraction;
	int i;
	char str[10] = "xxxxxxxxxx";

	if( nb < 0 ) {
		write( 1, "-", 1 );
		nb = -nb;
	} 

	if ( nb == -2147483648 ) {
		write( 1, "2", 1 );
		nb = 147483648;
	}

	if ( nb == 0 ) {
		write( 1, "0", 1 );
	}

	whole = nb;

	i = 0;

	while ( whole > 0) {
	
		fraction = whole % 10;
		whole = (int)whole / 10; 
		str[i++] = (char)48 + fraction;
	}

	while( --i >= 0 ) {
		write( 1, &str[i], 1 );
	}
}
	
	
	
	
	