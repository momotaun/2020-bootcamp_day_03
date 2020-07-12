#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp_num;
	int		temp_num2;

	temp_num = *a;
	temp_num2 = *b;
	*a = temp_num2;
	*b = *temp_num;
}
