// Escribe una funcion que reciba como parametro un puntero a un int y de al int el valor 42
//
// Funciones permitidas:
// -
//
#include<unistd.h>

void	ft_ft(int	*nbr){
	*nbr = 42;
}

void	ft_putchar(char	c) {
	write(1, &c, 1);
}

void	ft_putnbr(int	nb){
	if (nb == -2147483648){

		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0){
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10){
		ft_putnbr(nb / 10);
	}
	ft_putchar (nb % 10 + '0');
}

int main(void){
	int a = 0;
	ft_ft(&a);
	ft_putnbr(a);
	ft_putchar('\n');
	return 0;
}
