char *ft_strlcapitalize(char *str) {

	int j = 0;

	while (str[j] != '\0') {

		if ( str[j] >= (char)65 &&  str[j] <= (char)95 )
			str[j] = (str[j] + (char)32);
			
		j++;
	}

	int i = 0;

	if ( str[0] >= 'a' && str[0] <= 'z' ) // проверим первую букву
		str[0] = (str[0] - 32);

	while (str[i] != '\0') {

		if ( 
			!(str[i] >= 'a' && str[i] <= 'z') && // этот символ не буква
			!(str[i] >= 'A' && str[i] <= 'Z') && // и это не большая буква
			!(str[i] >= '0' && str[i] <= '9') && // и это не цифра
			str[i + 1] >= 'a' && str[i + 1] <= 'z' ) // следующий символ буква
		 	str[i + 1] = (str[i + 1] - 32);
			
		i++;
	}

	return (str);
}