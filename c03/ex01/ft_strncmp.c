int ft_strncmp(char *s1, char *s2, unsigned int n) {

	int ans;
	int i = 0;

	while ( s1[i] && s2[i] && i <= n ) { 

		if ( ! ( s1[i] == s2[i] ) ) {

			ans = s1[i] - s2[i];
			return (ans); 
		}

		else

			i++;

	}

	return (0);
}