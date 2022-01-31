#include <unistd.h> 

int main( void ) {

	int i = 11;

	while( ++i <= 786 ) {

		char num3 = (char) 48+(int)i/100;
		char num2 = (char) 48+(int)(i-100*((int)i/100))/10;
		char num1 = (char) 48+i%10;

		if( num1 == num2 || num2 == num3 || num1 == num3)
			continue;

		write(1, &num3, 1);
		write(1, &num2, 1);
		write(1, &num1, 1);
		write(1, ", ", 2);
	}
	write(1, "789", 3);

	return(1);
}