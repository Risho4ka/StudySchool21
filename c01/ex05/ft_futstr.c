#include <unistd.h> 

void	ft_futstr(char *str) {

    // считать массив? 6 символов, последний '\0' { 'H'. 'e', 'l', 'l', 'o', '\0' }

    int i = 0;

    while ( *(str + i) != '\0') {
    
        write( 1, &str[i], 1);
        i++;
    }
}	
