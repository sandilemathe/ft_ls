#include "ft_ls.h"

/*collect flags from user input and return index after flags*/
int			ft_inputFlags(char **ft_lsFlags, char **argv)
{
	int		index;
	int		j;
	char	*s;
	char	l_str[7];

	index = 0;
	j = 0;
	s = ft_strnew(10);
	while (argv[++index] && (argv[index][0] == '-'))
	{
		s = ft_flagChecker(argv[index], s, 0);
		while (*s)
		{
			if (!(ft_strchr(l_str, *s)))
			{
				l_str[j++] = *s;
			}
			s++;
		}
	}
	l_str[j] = 0;
	*ft_lsFlags = ft_strdup(l_str);
	s = 0;
	free(s);
	return (index);
}