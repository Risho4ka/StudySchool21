#include "ft_strlowcase.c"
#include <stdio.h>

int main(void) {

	char string [] = "HELLO" ;
	char *str;

	printf("%s\n", string); 

	str = ft_strlowcase(string);

	printf("%s\n", str); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную

Нужно:
Перобразование буквы из верхнего в нижний регистр

Тестирование:
Вывести исходную переменную = текст
Вывести получившуюся переменную = текст
Текст должен состоять только из заглавных букв
*/