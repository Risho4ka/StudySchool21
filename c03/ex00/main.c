#include "ft_strcmp.c"
#include <stdio.h>

int main(void) {

	char s1 [] = "Hello";
	char s2 [] = "Hello";
	int ans;

	printf("%s\n", s1);
	printf("%s\n", s2);

	ans = ft_strcmp(s1, s2);

	printf("%d\n", ans);

	return (0);
}

/* 
Исходные данные:
текcт1
текст2

Нужно:
Сравнить два текста
0 - если все символы сопадают
i > 0 - если есть отличия и код первого отличающегося символа в тексте1 больше кода в тексте2 на том же месте 
i < 0 - если есть отличия и код первого отличающегося символа в тексте1 меньше кода в тексте2 на том же месте 
Воссоздать действия функции strcmp

Тестирование:
Вывести:
0
i > 0 
i < 0
*/