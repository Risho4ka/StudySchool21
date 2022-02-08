char *ft_strupcase(char *str) {

	int i = 0;

	while (str[i] != '\0') {

		if ( str[i] >= (char)97 &&  str[i] <= (char)122 )
			str[i] = (str[i] - (char)32);
			
		i++;
	}

	return (str);
}