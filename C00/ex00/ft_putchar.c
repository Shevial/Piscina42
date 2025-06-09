// Escribe una funcion que muestre el caracter usado como parámetro
// Funciones autorizadas: 
// write


#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);

} 

int main (void){

	ft_putchar('S');
	ft_putchar('A');
	ft_putchar('\n');
}



