#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\v'
			|| c == '\r' || c == '\f' || c == '\n')
		return (1);
	return (0);
}