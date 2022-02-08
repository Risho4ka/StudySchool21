#include "ft_str_is_printable.c"
#include <stdio.h>

int main(void) {

	char str = (char)13 ;
	int res;

	printf("%c1\n", str); 

	res = ft_str_is_printable(&str);

	printf("%d\n", res); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную


Нужно:
Если только печатные символы или пуст, то 1
Иначе 0


Тестирование:
Вывести исходную переменную = текст
Вывести получившийся результат 1 или 0
*/