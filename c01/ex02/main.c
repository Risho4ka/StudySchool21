#include "ft_swap.c"
#include <stdio.h>

int main(void) {

	int i = 1;
	int j = 2;

	printf("%d%c%d\n", i, ' ', j);

	ft_swap(&i, &j); // передали адрес переменной
	//ft_swap2(&i, &j); // передали адрес переменной

	printf("%d%c%d\n", i, ' ', j);

	return(0);
}