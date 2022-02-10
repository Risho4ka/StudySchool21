#include "ft_strlcapitalize.c"
#include <stdio.h>

int main(void) {

	char string [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un" ;
	char *str;

	printf("%s\n", string); 

	str = ft_strlcapitalize(string);

	printf("%s\n", str); 

	return (0);
}

/* 
Исходные данные:
текcт
указатель на исходную переменную

Нужно:
Перобразование каждой первой буквы у слова в верхний регистр и все последующие буквы из верхнего в нижний регистр

Тестирование:
Вывести исходную переменную = текст
Вывести получившуюся переменную = текст
Исход: salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
Итог:  Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
*/