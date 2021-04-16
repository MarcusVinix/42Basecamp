#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{

	int tab[6] = {89, 5, 4, 6, 9, 8};
	int size = 6;
	int i = 0;

	printf("Before:");
	while (i < size)
	{
		printf(" %d", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("\nAfter:");
	while (i < size)
	{
		printf(" %d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}