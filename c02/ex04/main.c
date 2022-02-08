#include "ft_str_is_lowercase.c"
#include <stdio.h>

int main(void) {

	char str [] = "hello" ;
	int res;

	printf("%s\n", str); 

	res = ft_str_is_lowercase(str);

	printf("%d\n", res); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную


Нужно:
Если только строчные буквы или пуст, то 1
Иначе 0


Тестирование:
Вывести исходную переменную = текст
Вывести получившийся результат 1 или 0
*/