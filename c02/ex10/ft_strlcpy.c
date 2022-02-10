unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {

	int i = 0;

	while ( src[i] && i < size - 1 ) {
		
		dest[i] = src[i];
		i++;
	}

	int j=0;
	
	while ( src[j] ) 
		j++;

	return (j);
}