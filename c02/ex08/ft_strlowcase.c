char *ft_strlowcase(char *str) {

	int i = 0;

	while (str[i] != '\0') {

		if ( str[i] >= (char)65 &&  str[i] <= (char)90 )
			str[i] = (str[i] + (char)32);
			
		i++;
	}

	return (str);
}