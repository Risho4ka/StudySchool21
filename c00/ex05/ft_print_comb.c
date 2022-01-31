#include <unistd.h> 

void ft_print_comb(void) {

    char nums1;
    char nums2;
    char nums3;

    nums1 = '0';

    while (nums1 <= '9') {

        nums2 = nums1 + 1;

        while (nums2 <= '9') {

            nums3 = nums2 + 1;

            while (nums3 <= '9') {

                write(1, &nums1, 1);
                write(1, &nums2, 1);
                write(1, &nums3, 1);

                    if (!( nums1 == '7' && nums2 == '8' && nums3 == '9' ))
                        write(1, ", ", 2);

                nums3++;
            }

            nums2++;
        }
        
        nums1++;
    }  
}

