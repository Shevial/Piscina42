// Escribe una funcion que muestre el alfabeto en minusculas en una sola linea en orden creciente, empezando con la letra a 
// Funciones permitidas
// write

#include <unistd.h>

void ft_print_alphabet(void){

	char c = 'a';

	while(c <='z')
	{
		write(1,&c,1);
		c++;

	}

	 char newline = '\n';
 	 write(1, &newline, 1);
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
