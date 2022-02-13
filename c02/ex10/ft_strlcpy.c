/*
	логика работы:
	- копируем символы из src в dest паралельно считая длину src
	- если мы закончили копировать символы, а scr еще не закончилась, то досчитаем длину
*/
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {

	int len = 0;

	// копирование символов из src в dest
	while ( src[len] && len < size - 1 ) {
		
		dest[len] = src[len];
		len++;
	}
	
	// если символы в src еще есть, то досчитаем длину строки src
	while ( src[len] ) 
		len++;

	return (len);
}