#include "ft_str_is_alpha.c"
#include <stdio.h>

int main(void) {

	char str [] = "" ;
	int res;

	printf("%s\n", str); 

	res = ft_str_is_alpha(str);

	printf("%d\n", res); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную


Нужно:
Если только буквы или пуст, то 1
Иначе 0


Тестирование:
Вывести исходную переменную = текст
Вывести получившийся результат 1 или 0
*/