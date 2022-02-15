#include "ft_strncpy.c"
#include <stdio.h>

int main(void) {

	char str [] = "Hello" ;
	char empty [6]; 
	
	char *dest;

	printf("%s\n", str); 

	dest = ft_strncpy(empty, str, 3);

	printf("%s\n", dest); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную
указатель на новую переменную
количество элементов копирования

Нужно:
Копировать количество указанных символов из одной перменной в другую 
Воссоздать действия функции strncpy

Тестирование:
Вывести исходную переменную = текст
Вывести получившуюся переменную = текст
Текст на заданное количество символов должен совпадать
*/