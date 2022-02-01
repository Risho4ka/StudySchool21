#include <unistd.h> 

void ft_print_comb2(void) {

    char nums[10] = "0123456789";
    int i;
    int j;

        i = 0;
        while ( i < 99) {

            j = i + 1;

            while ( j <100) {

                write(1, &nums[ (int)i/10 ], 1);
                write(1, &nums[ i%10 ], 1);
                write(1, " ", 1);
                write(1, &nums[ (int)j/10 ], 1);
                write(1, &nums[ j%10 ], 1);

                if( !(i == 98 && j == 99) ) 
                    write(1, ", ", 2);

                j++;
            }
            
            i++;
        }
}
