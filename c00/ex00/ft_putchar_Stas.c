
#include <unistd.h>  // библиотека с функцией write 


// не ставь табуляции между командами
void ft_putchar(char c) // void так как функция ничего не возвращает, переменная char так как выводим символ 
// комментарий без смысла
{
// открывающую скобку лучше оставлять в той же строке, к какой команде она принадлежит
	write(1, &c, 1); /* 1 - нужно вывести на экран, & - указывает, что нам нужно вывести, 
	1 - количество байтов (1 символ - 1 байт) */

	// думаю ты не разобралась с &
}


/*
 * лучше когда код выглядит так
 */

// библиотека с функцией write 
#include <unistd.h>  


// void так как функция ничего не возвращает, переменная char так как выводим символ 
void ft_putchar(char c) {

	// первый параметр указывает куда вывод (1 - на экран), 
	// второй парамер указывает, что нам нужно вывести, 
	// третий параметр указывает количество байт (1 символ - 1 байт)
	write(1, &c, 1);
}
