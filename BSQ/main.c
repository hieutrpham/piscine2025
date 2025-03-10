#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
char	*get_dict()
{
	int	fd = open("example", O_RDONLY);

	char	ch;
	int	size;

	size = 0;
	while (read(fd, &ch, 1) > 0)
		size++;
	close(fd);

	char	*dict = malloc(size + 1);
	int	i;

	i = 0;
	fd = open("example", O_RDONLY);
	while (read(fd, &ch, 1) > 0)
	{
		dict[i] = ch;
		i++;
	}
	dict[size] = '\0';

	close(fd);
	return (dict);
}
int	main()
{
	char *str;
	str = get_dict();
	printf("%s", str);
}
