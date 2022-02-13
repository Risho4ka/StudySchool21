void ft_ultimate_div_mod(int *a, int *b) {

	int c;

	c = *a;
	*a = (int) *a / *b;
	*b = c % *b;
}