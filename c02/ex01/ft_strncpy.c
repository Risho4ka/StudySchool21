char *ft_strncpy(char *dest, char *scr, unsigned int n) {

int i = 0;

	while ( scr[i] && i < n) {

		dest[i] = scr[i];
		i++;
	}
	return (dest);
}