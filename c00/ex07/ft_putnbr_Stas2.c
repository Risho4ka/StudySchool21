#include <unistd.h>
#include <stdio.h>


// решение 1, через цикл
/*int main() {

	int x = 22333;
	int divide = 1000000000;
	int num;
	int zeros = 1;
	char c;

	if( x<0 ) {
		write(1,"-",1);
		x = -x;
	}

	while( divide>=1 ) {

		num = (int)x/divide;
		c = (char)num+48;

		if( num!= 0 )
			zeros = 0;
		
		if( zeros == 0 ) 
			write(1,&c,1);
		
		x -= num*divide;
		
		divide /= 10;
	}
	
	return(0);
}*/

// решение 2, через рекурсию
void numbers( int );

int main() {

	int x = 34567;

	if( x<0 ) {
		write(1,"-",1);
		x *= -1;
	}
	numbers( x );
}

void numbers( int x ) {

	int divide = 1;
	while( divide<x/10 )
		divide *= 10;

	int num = (int) x/divide;
	char c = (char) num+48;

	write(1,&c,1);

	if( divide/10>=1 ) 
		numbers(x-num*divide);
}