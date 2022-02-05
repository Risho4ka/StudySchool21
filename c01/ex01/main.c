#include "ft_ultimate_ft.c"
#include <stdio.h>

int main(void) {

	int x = 1;

	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********j;
	
	a = &x;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	j = &h;

	printf("%d\n", x);

	ft_ultimate_ft(j); // передали адрес переменной

	printf("%d\n", x);

	return(0);
}