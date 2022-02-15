/*
логика работы:
	- проверяем либо первый, либо второй текст, так как они могут быть разной длины
	- устанавливаем условие по ограничению проверяемых символов
	- если первый попавшийся символ не совпадает, то выходим из программы и показываем разницу между символами
	- если символ первого текста больше, то число будет положительное, если нет, то отрицательное
	- если тексты одинаковые, то выдавай ноль
*/

int ft_strncmp(char *s1, char *s2, unsigned int n) {

	int i = 0;

	while ( (s1[i] || s2[i]) && i <= n ) { 

		if ( s1[i] != s2[i] )

			return (s1[i] - s2[i]); 

			i++;
	}
	return (0);
}