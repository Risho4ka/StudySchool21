#include "ft_str_is_uppercase.c"
#include <stdio.h>

int main(void) {

	char str [] = "HELLO" ;
	int res;

	printf("%s\n", str); 

	res = ft_str_is_uppercase(str);

	printf("%d\n", res); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную


Нужно:
Если только заглавные буквы или пуст, то 1
Иначе 0


Тестирование:
Вывести исходную переменную = текст
Вывести получившийся результат 1 или 0
*/