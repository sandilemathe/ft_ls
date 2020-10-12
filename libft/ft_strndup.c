#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *memdup;

	if (!(memdup = ft_strnew(n)))
		return (NULL);
	ft_strncpy(memdup, s1, n);
	return (memdup);
}