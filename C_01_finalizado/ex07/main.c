#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{

	int tab[6] = {89, 2, 4, 6, 7, 8};
	int size = 6;
	int i = 0;

	printf("Before\n");
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("After\n");
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}