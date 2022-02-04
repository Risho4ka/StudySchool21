#include <unistd.h> 

void	ft_strlen(char *str) {

    int i = 0;
    char c;

    while ( *(str + i) != '\0') {
    
        i++;
    }

    c = (char)(i + 48);
    write( 1, &c, 1);
}	
