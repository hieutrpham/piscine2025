#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	word = 0;
	int	mark = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (!is_sep(str[i], charset) && mark == 0) 
		{
			word++;
			mark = 1;
		}
		else if (is_sep(str[i], charset))
			mark = 0;
		i++;
	}
	return (word);
}

char	*malloc_word(int size)
{
	char	*string = malloc(size + 1);
	if (!string)
		return (NULL);
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		words = count_word(str, charset);
	int		i = 0, j = 0, k = 0;
	int		start, end;

	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);

	while (str[k] != '\0' && i < words)
	{
		while (str[k] != '\0' && is_sep(str[k], charset))
			k++;
		start = k;
		while (str[k] != '\0' && !is_sep(str[k], charset))
			k++;
		end = k;

		arr[i] = malloc_word(end - start);
		if (!arr[i])
			return (NULL);
		j = 0;
		while (start < end)
			arr[i][j++] = str[start++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int main()
{
	char **str = ft_split("hive,hel,", ",i");
	for (int i = 0; str[i] != NULL; i++)
		printf("%s\n", str[i]);
}

