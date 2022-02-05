void ft_swap(int *a, int *b) {

	int c;

	c = *a; // забери значение а
	*a = *b; // значению а присвой значение b
	*b = c; // значению b присвой значение с, которое имеет значение а
}

/* Вариант Стаса
void ft_swap2(int *a, int *b) {

	*a = *a - *b;
	*b = *b + *a;
	*a = *b - *a;
}
*/