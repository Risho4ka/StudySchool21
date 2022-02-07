char *ft_strcpy(char *dest, char *scr) {

	int i = 0;

	while (scr[i]) {

		dest[i] = scr[i];
		i++;
	}

	return (dest);
}