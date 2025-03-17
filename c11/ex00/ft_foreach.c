void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main()
{
	int tab[6] = {12,3,4,4,34,34};
	ft_foreach(tab, 6, &ft_putnbr);
}
