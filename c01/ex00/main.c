#include "ft_ft.c"
#include <stdio.h>

int main(void) {

	int x = 1;

	ft_ft(&x); // передали адрес переменной

	printf("%d\n", x);

	return(0);
}

