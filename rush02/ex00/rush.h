#ifndef RUSH_H
#define RUSH_H

void    ft_putstr(char *str);
int     input_num(char *str);
void    ft_input_arg(int argc, char **argv);
char **split_newline(char *str, int *str_size);
char    *trim_spaces(char *str);
char    *construct_nodes(char **str, int arr_size);
int     ft_strlen(char *str);

#endif  
