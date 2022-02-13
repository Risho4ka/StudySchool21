char *ft_strncat(char *dest, char *scr, unsigned int nb) {

	int i = 0;

		while ( dest[i] ) {

			i++;
		}

	int j = 0;

		while ( scr[j] && j <= nb ) {

			dest[i] = scr[j];
			j++;
			i++;
		}

	dest[i] = '\0';

	return (dest);
}