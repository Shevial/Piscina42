#include <unistd.h>

void ft_print_numbers_ascii(void){

        int c = 48;

        while(c <=57)
        {
                write(1,&c,1);
                c++;

        }

         char newline = '\n';
         write(1, &newline, 1);
}

int main(void)
{
    ft_print_numbers_ascii();
    return 0;
}
