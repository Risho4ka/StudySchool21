#include "ft_strcat.c"
#include <stdio.h>

int main(void) {

	char s1 [] = "World, I am happy!" ;
	char s2 [] = "Hello";
	char *dest;

	printf("%s\n", s1);
	printf("%s\n", s2); 

	dest = ft_strcat(s2, s1);

	printf("%s\n", dest); 

	return (0);
}

/* 
Исходные данные:
текcт1
текст2

Нужно:
Объединить текст1 и текст2

Тестирование:
Вывести исходную переменные = текст 1 и текст2
Вывести получившуюся переменную = текст2+текст1
*/