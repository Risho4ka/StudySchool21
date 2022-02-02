#include <unistd.h>
#include <stdio.h>

// решение через рекурсию
void numbers( int );
void ft_putchar( char );

int main() {

	//int x = -2147483648;
	//int x = 2147483647;
	int x = 0;
	
	numbers( x );
}

void numbers( int x ) {

	if( x>=10 || x<=-10 )
		numbers( (int) x/10 );

	if( x>-10 && x<0 )
		ft_putchar('-');

	x = x<0 ? -(x%10) : x%10;

	ft_putchar((char)(x+48));
}

void ft_putchar( char c ) {
	write(1, &c, 1);
}