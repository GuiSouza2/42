#include "libft.h"

void	f(unsigned int	i, char *s)
{
	printf("indice: %d, valor: %s\n", i, s);
}

int	main(void)
{
	char	*s;

	s = "Patriciia Roberta da Silvia\0";
	ft_striteri(s, f);
	printf("\n%s\n",s);
}
