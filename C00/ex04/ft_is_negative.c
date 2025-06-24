// Mostrar N o P(Negativo o Positivo y nulo) en funcion del signo del entero que se ha usado como parametro.
//
// Funciones permitidas:
// write

#include<unistd.h>

void ft_is_negative(int n){
	
	if(n < 0 ){
	 	
		write(1,"N",1);
	
	} else {
		
		write(1,"P",1);
	}

	write(1, "\n", 1);
}
int main (void){
	
	ft_is_negative(7);
        ft_is_negative(-8);
        ft_is_negative(0);

}
	

