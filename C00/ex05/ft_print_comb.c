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

#include<unistd.h>

void ft_print_comb(void){
	
	int n = 0;
	while(n <= 999){
		write(1, "&n", 1);
		n ++;

	}
}

int main (void){

	ft_print_comb();
	return 0;

}
