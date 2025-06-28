// Escribe una funcion que muestre en orden creciente todas las combinaciones posibles de tres digitos distinos en orden creciente -sí, la repetición es voluntaria. 
// ./a.out | cat -e
// 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
//
// 987 no está porque 789 ya existe
//
// 111 no está porque este numero no contiene unicamente digitos distintos
//
// Funciones permitidas:
// write

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    char a = '0';

    while (a <= '7') {
        char b = a + 1;
        while (b <= '8') {
            char c = b + 1;
            while (c <= '9') {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);

                if (!(a == '7' && b == '8' && c == '9')) {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void) {
    char newline = '\n';
    ft_print_comb();
    ft_putchar(newline);
    return 0;
}

