int ft_strcmp(char *s1, char *s2) {

	int ans;
	int i = 0;

	while ( s1[i] && s2[i] ) { 

		if ( ! ( s1[i] == s2[i] ) ) {

			ans = s1[i] - s2[i];
			return (ans); 
		}

		else

			i++;

	}

	return (0);
}