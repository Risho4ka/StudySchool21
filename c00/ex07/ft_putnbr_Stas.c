#include <unistd.h> 

int main() {

	int nb = 34567;
	int whole;
	int fraction;
	int i;
	char str[10] = "xxxxxxxxxx";

	// выравнивается по блоку
	if( nb < 0 ) {
		// отступы нужны
		write( 1, "-", 1 );
		whole = -nb;
	} 
	else { // пустых строк много не надо
		// отступы нужны
		whole = nb;
	} 

	i = 0;

	while ( whole > 0) {
	
		fraction = whole % 10;
		whole = (int)whole / 10; 
		str[i++] = (char)48 + fraction;
	}

	// блок переделан
	while( --i >= 0 )
		write( 1, &str[i], 1 );

	return(0);
}
	
	
	
	
	