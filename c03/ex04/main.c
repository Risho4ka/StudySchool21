#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

int main(void) {

	char str [] = "abcdef" ;
	char to_find [] = "cde";

	printf("str = %s\n", str);
	printf("to_find = %s\n", to_find); 

	char *res = ft_strstr(str, to_find);
	printf("ft_strstr = %s\n", res ); 

	char *istr = strstr(str, to_find);
	printf("strstr = %s\n", istr ); 

	return (0);
}

/* 
Исходные данные:
текcт1 
текст2

Нужно:
Объединить в тексте1 найти текст2

Тестирование:
Вывести исходную переменные = текст 1 и текст2
Вывести либо NULL, либо указатель на первое сопадающий элемент

- Функция возвращает указатель на первое вхождение строки string2 в строку string1.
- strstr возвращает NULL,  если string2 не была найдена.
- Если  длина  строки  string2  равна  0,   возвращается string1.

haystack = "привет вася"
neddle = "вет"

pointer = haystack+3
*/