#include <unistd.h>

void ft_print_reverse_ascii_alphabet(void){

        char c = 'z';

        while(c >='a')
        {
                write(1,&c,1);
                c--;

        }

         char newline = '\n';
         write(1, &newline, 1);
}
int main(void)
{
    ft_print_reverse_ascii_alphabet();
    return 0;
}


