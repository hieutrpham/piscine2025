
int	ft_strlen(char *str)
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (str[++i] != 0)
		count++;
	return (count);
}
#include <unistd.h>
int main(int ac, char **av)
{
	char *str = av[1];
	int size;
	
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	size = ft_strlen(str);
	int i = 0;
	if (size == 0)
	{
		write(1, "\n", 1);
		return 0;
	}
	if (str[i] == '\0')
		write(1,"\n",1);

	while (i < size - 1)
	{
		write(1, &str[i], 1);
		write(1, "...", 3);
		i++;
	}
	write(1, &str[size - 1], 1);
	write(1, "\n", 1);
	return 0;
}
