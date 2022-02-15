/*
функция strlcat:
- объединить dest и src
- у dest заданна длина массива для возможного копирования
- вывести суммарное количество символов dest и src

логика работы:
- считаем длину src
- считаем длину dest
- пока есть src и длина dest плюс новый символ от src меньше заданного размера для копирования
- добавляем к существующему dest символы от src
- последний символ будет '\0'
- выводим суммарную длину src и dest  
*/

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {

	int len_src = 0;
	while ( src[len_src++] );

	int len_dest = 0;
	while ( dest[len_dest++] );

	int i = 0;
	while( src[i] && len_dest+i < size ) {
		dest[len_dest-1+i] = src[i];
		i++;
	}

	dest[len_dest-1+i] = '\0';

	return (len_src+len_dest-2);
}