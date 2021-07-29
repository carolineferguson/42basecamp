#ifndef FT_FUNCTIONS_H
#define FT_FUNCTIONS_H


void	ft_print_solution(int matrix[4][4]); 										 // Done
int		ft_atoi(char *str);					 										 // Done
void	ft_putchar(char c);				     										 // Done
void	ft_putnbr(int nbr);                  										 // Done
int		verify_top_edge(int matrix[4][4], int kernel[16], int pos);					 // ToDo
int		verify_left_edge(int matrix[4][4], int kernel[16], int pos);				 // ToDo
int		verify_right_edge(int matrix[4][4], int kernel[16], int pos);				 // ToDo
int		verify_bottom_edge(int matrix[4][4], int kernel[16], int pos);			     // Todo
int		produce_solution(int matrix[4][4], int kernel[16], int pos);				 // Todo

#endif
