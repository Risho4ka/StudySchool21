#include "ft_div_mod.c"
#include <stdio.h>

int main(void) {

	int div ;
	int mod ;

	ft_div_mod(6, 4, &div, &mod); // передали адрес переменной

	printf("%d%c%d\n", div, ' ', mod);

	return(0);
}