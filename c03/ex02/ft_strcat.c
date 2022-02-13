char *ft_strcat(char *dest, char *scr) {

	int i = 0;

		while ( dest[i] ) {

			i++;
		}

	int j = 0;

		while ( scr[j] ) {

			dest[i] = scr[j];
			j++;
			i++;
		}

	dest[i] = '\0';

	return (dest);
}