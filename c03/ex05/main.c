#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int main(void) {

	char src [] = "Wor";
	char dst [10] = "Hello";
	int res;

	res = strlcat(dst, src, 7);
	printf("%d, %s\n", res, dst );

	char my_s1 [] = "Wor";
	char my_s2 [10] = "Hello";
	int my_res;

	my_res = ft_strlcat(my_s2, my_s1, 7);

	printf("%d, %s\n", my_res, my_s2 );

	return (0);
}

/* 
Исходные данные:
текcт1
текст2
число символов, которые мы хотим получить dst + кол-во символов из src + '\0'

Нужно:
Объединить текст1 и текст2, у которого заданно количество символов для копирования

Тестирование:
Вывести количество символов dst + src
Вывести получившийся текст
*/