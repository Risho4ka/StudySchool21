char *ft_strlcapitalize(char *str) {

	int j = 0;
	// смещение между большими и маленькими английскими символами 
	char delta = (char)32;

	//преобразуем все буквы в маленькие
	while (str[j]) {

		if ( str[j] >= 'A' &&  str[j] <= 'Z' )
			str[j] = str[j] + delta;
			
		j++;
	}

	int i = 0;

	if ( str[0] >= 'a' && str[0] <= 'z' ) // проверим первую букву, так как перед ней нет никакого символа
		str[0] = str[0] - delta;

	while (str[i] != '\0') {

		if ( 
			!(str[i] >= 'a' && str[i] <= 'z') && // этот символ не буква
			!(str[i] >= 'A' && str[i] <= 'Z') && // и это не большая буква
			!(str[i] >= '0' && str[i] <= '9') && // и это не цифра
			str[i + 1] >= 'a' && str[i + 1] <= 'z' ) // следующий символ буква
		 	str[i + 1] = (str[i + 1] - delta);
			
		i++;
	}

	return (str);
}