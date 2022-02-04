#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main(void) {

	int a = 6;
	int b = 4;

	ft_ultimate_div_mod(&a, &b); // передали адрес переменной

	printf("%d%c%d\n", a, ' ', b);

	return(0);
}

