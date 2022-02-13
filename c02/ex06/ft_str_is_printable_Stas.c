int ft_str_is_printable(char *str) {

	int i=0;
	
	while ( str[i] != '\0') {

		// непечатные символы это те, у которых код символа от 0 до 31 включительно (считаем пока так)
		if ( !str[i] < ' ' )
			return 0;

		i++;
	}

	return 1;
}