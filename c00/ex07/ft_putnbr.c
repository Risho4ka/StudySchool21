#include <unistd.h> 

void ft_putnbr(int nb) {

    int whole;
    int fraction;
    int i;
	char str[10] = "xxxxxxxxxx";

		if( nb < 0 ) {
  		write( 1, "-", 1 );
    	whole = -nb;
		}
		
		else {
		whole = nb;
		} 

		i = 0;

    	while ( whole > 0) {
        
        	fraction = whole % 10;
        	whole = (int)whole / 10; 
        	str[i++] = (char)48 + fraction;
    	}

    	i=9;

    	while( i >= 0 ) {

        	if( str[i] != 'x' ) 
            write( 1, &str[i], 1 );

        	i--;
   		}
}
	
	
	
	
	