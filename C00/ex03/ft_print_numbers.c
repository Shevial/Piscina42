#include <unistd.h>

void ft_print_numbers(void){

        int c = '0';

        while(c <='9')
        {
                write(1,&c,1);
                c++;

        }

         char newline = '\n';
         write(1, &newline, 1);
}

int main(void)
{
    ft_print_numbers();
    return 0;
}

