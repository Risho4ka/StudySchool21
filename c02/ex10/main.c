#include "ft_strlcpy.c"
#include <stdio.h>

int main(void) {

	char src [] = "Hello";
	char dest [6]; 
	
	int j;

	printf("%s\n", src); 

	j = ft_strlcpy(dest, src, 3);

	printf("%d\n", j);

	return (0);
}

/* 
Исходные данные:
текcт
количество ячеек под копирование

Нужно:
Копировать заданное количество элементов в заданное количество ячеек
Воссоздать действия функции strlcpy

Тестирование:
Вывести исходный текст
Вывести количество элементов у исходного копируемого текста
*/

/*
#include <string.h>
#include <stdio.h>

int main () {

	char *src = "abcdef";
	char dst [7];

	printf("i want to copy '%s' to new string.\n",src);

	int x = strlcpy( dst, src, 17 );

	printf("The length of %s is %d bytes. Result of copy = '%s'\n",src,x,dst);

	return (0);
}
*/