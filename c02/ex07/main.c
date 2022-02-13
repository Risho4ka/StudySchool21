#include "ft_strupcase.c"
#include <stdio.h>

int main(void) {

	char string [] = "hello" ;
	char *str;

	printf("%s\n", string); 

	str = ft_strupcase(string);

	printf("%s\n", str); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную

Нужно:
Перобразование буквы из нижнего в верхний регистр

Тестирование:
Вывести исходную переменную = текст
Вывести получившуюся переменную = текст
Текст должен состоять только из заглавных букв
*/