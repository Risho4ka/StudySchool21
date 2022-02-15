// замечание 1 
// здесь, как никогда нужны комментарии, ибо вспомнить потом что такое 122, 97 и 32 будет очень непросто
// это называется "волшебные цифры" и лучшее - это никогда не использовать их
// вместо них лучше использовать переменные, названия которых будут говорить сами за себя

// замечание 2
// (char)97 это операция, которая будет выполняться программой
// разумнее сразу записать результат этой операции, чтобы ускорить выполнение программы

/* 
	логика работы:
	маленькие английские буквы начинаются с кода 97 (a) и заканчиваются кодом 122 (z)
	большие английские буквы начинаются с кода 65 (A) и заканчиваются кодом 90 (Z) 
	то есть смещены относительно друг друга на 32
	следовательно перебираем все символы строки и ищем маленькие буквы и применяем к ним смещение
*/

char *ft_strupcase(char *str) {

	int i = 0;
	// смещение между большими и маленькими английскими символами 
	char delta = (char)32;

	while ( str[i] ) { // мне нравится эта чуть более короткая запись

		if ( str[i] >= 'a' &&  str[i] <= 'z' )
			str[i] = str[i] - delta; //  скобки тут были лишние
			
		i++;
	}

	return (str);
}